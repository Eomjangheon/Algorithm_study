/*
Silver3 random
문제이름	: 영단어 암기는 괴로워
문제번호	: 20920
난이도	: s3
소요시간	: 4m 10s
*/


#include <iostream>
#include <map>
#include <vector>
#include <algorithm>


using namespace std;

void algoInit()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}


int main()
{
	algoInit();
	
	map<string, int> m;
	
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		string input;
		cin >> input;
		if (input.size() < k)
			continue;

		if (m.find(input) == m.end()) {
			m.insert(make_pair(input, 1));
		}
		else {
			m[input]++;
		}
	}
	vector<pair<string, int>> v;
	for (auto& [str, num] : m) {
		v.push_back(make_pair(str, num));
	}

	sort(v.begin(), v.end(), [](const pair<string, int>& p1, const pair<string, int>& p2) {
		if (p1.second != p2.second) {
			return p1.second > p2.second;
		}

		if (p1.first.size() != p2.first.size()) {
			return p1.first.size() > p2.first.size();
		}

		return p1.first < p2.first;
		});

	for (auto& [str, num] : v) {
		cout << str << "\n";
	}
}


