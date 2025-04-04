#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <queue>
using namespace std;
int table[6][3]{ {9,3,1},{9,1,3},{1,9,3},{1,3,9},{3,1,9},{3,9,1} };
int visited[61][61][61];
queue<tuple<int, int, int>> q;

int attackScv3(vector<int> scvs) {
	visited[scvs[0]][scvs[1]][scvs[2]] = 1;
	
	q.push({ scvs[0], scvs[1], scvs[2]});

	while (!q.empty()) {	
		int scv1, scv2, scv3;
		tie(scv1,scv2,scv3) = q.front();
		q.pop();
		if (visited[0][0][0]) 
			break;

		for (int i = 0; i < 6; ++i) {
			int nScv1 = max(scv1 - table[i][0], 0);
			int nScv2 = max(scv2 - table[i][1], 0);
			int nScv3 = max(scv3 - table[i][2], 0);
			if (visited[nScv1][nScv2][nScv3]) continue;
			visited[nScv1][nScv2][nScv3] = visited[scv1][scv2][scv3] + 1;
			q.push({ nScv1 ,nScv2,nScv3 });
		}
	}
	return visited[0][0][0] - 1;
}



int n;
vector<int> v;
int main() {

	cin >> n;
	while (n--) {
		int input;
		cin >> input;
		v.push_back(input);
	}

	cout << attackScv3(v);

}