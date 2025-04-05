#include <iostream>
#include <queue>
#include <tuple>
#include <vector>
#include <stack>
using namespace std;
int n, k;
int visited[200001];
int visitedPath[200001];
int minMoves = 10000000;
int ans = 0;

int moveCase(int i,int x) {
	if (i == 0)return x - 1;
	if (i == 1)return x + 1;
	if (i == 2)return x * 2;
}
void findBrother(int x) {
	fill(visitedPath, visitedPath + 200001, -1);

	vector<int> v;
	queue<int> q;
	q.push(x);
	visited[x] = 1;
	v.push_back(x);
	
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		if (now == k) {
			cout << visited[now] - 1 << "\n";
			int priorPath = now;
			stack<int> path;
			while (priorPath != -1) {
				path.push(priorPath);
				priorPath = visitedPath[priorPath];
			}
			while (!path.empty()) {
				cout << path.top() << " ";
				path.pop();
			}
			return;
		}
		for (int i = 0; i < 3; ++i) {
			int nx = moveCase(i, now);
			if (nx < 0 || nx >= 200000)continue;
			if (visited[nx])continue;
			if (visited[now] > minMoves)continue;

			visited[nx] = visited[now] + 1;
			visitedPath[nx] = now;
			q.push(nx);
			
		}
			
		
	}
}

int main() {
	cin >> n >> k;
	findBrother(n);
}