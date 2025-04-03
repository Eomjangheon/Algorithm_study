#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int n,m;
vector<pair<int, int>> posHome;
vector<pair<int, int>> posChicken;
vector<pair<int, int>> posChoosedChicken;


int ans = 2000000000;

void findMinDist(int nowChicken) {
	pair<int, int> nowPos = posChicken[nowChicken];
	posChoosedChicken.push_back(nowPos);
	if (m == posChoosedChicken.size()) {
		int tempSum = 0;
		for (int i = 0; i < posHome.size(); ++i) {
			int tempDis = 104;
			int nowx = posHome[i].first;
			int nowy = posHome[i].second;
			for (int j = 0; j < posChoosedChicken.size(); ++j) {
				int cx = posChoosedChicken[j].first;
				int cy = posChoosedChicken[j].second;
				int dis = abs(cx - nowx) + abs(cy-nowy);
				tempDis = min(tempDis, dis);
			}
			tempSum += tempDis;
		}
		ans = min(ans, tempSum);
		return;
	}

	for (int i = nowChicken + 1; i < posChicken.size(); ++i) {
		findMinDist(i);
		posChoosedChicken.pop_back();
	}

}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			int input;
			cin >> input;

			if (1 == input)
				posHome.push_back({ i,j });
			else if (2 == input)
				posChicken.push_back({ i,j });
		}
	}

	for (int i = 0; i < posChicken.size(); ++i) {
		findMinDist(i);
		posChoosedChicken.pop_back();
	}
	cout << ans;

}