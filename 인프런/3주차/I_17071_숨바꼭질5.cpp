#include <iostream>
#include <queue>
#include <algorithm>
#include <tuple>
#include<memory.h>
using namespace std;
int n, k;
bool visited[500001];
int minMoves = 10000000;
int ans = 0;
int step = 0;

int moveCase(int i,int x) {
	if (i == 0)return x - 1;
	if (i == 1)return x + 1;
	if (i == 2)return x * 2;
	return -1;
}
void findBrother(int x) {
	queue<pair<int,int>> q;
	q.push({x,0});

	while (!q.empty()) {
		int now, moves;
		tie(now, moves) = q.front();
		q.pop();
		if (step < moves) {
			step = moves;
			k += step;
			memset(visited, false, 500001);
		}
		
		if (k > 500000) {
			cout << -1;
			return;
		}
		if (now == k) {
			cout << moves;
			return;
		}
		for (int i = 0; i < 3; ++i) {
			int nx = moveCase(i, now);
			if (nx < 0 || nx > 500000)continue;
			if (visited[nx])continue;
			visited[nx] = true;
			q.push({ nx,moves + 1 });
		}
			
		
	}
}

int main() {
	cin >> n >> k;
	findBrother(n);
}