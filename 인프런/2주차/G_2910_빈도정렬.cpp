#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

//키는 숫자    페어에는 순서와 빈도
map<int, pair<int,int>>m;
vector<pair<int, pair<int, int>>> v;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n, c;
	cin >> n >> c;

	int order = 1;
	while (n--) {
		int input;
		cin >> input;
		if (m[input].first == 0) {
			m[input].first = order;
			order++;
		}
		m[input].second++;
	}

	for (auto p : m) {
		v.push_back(p);
	}

	sort(v.begin(), v.end(), [](const pair<int, pair<int, int>>& a, const pair<int, pair<int, int>>& b) {
		if (a.second.second == b.second.second) {
			return a.second.first < b.second.first;
		}
		return(a.second.second > b.second.second);
		});

	for (auto p : v) {
		for (int i = 0; i < p.second.second; ++i) {
			cout << p.first << " ";
		}
	}
}