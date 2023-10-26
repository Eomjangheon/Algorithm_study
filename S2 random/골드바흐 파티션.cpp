/*
Silver2 random
문제이름	: 골드바흐 파티션
문제번호	: 17103
난이도	: s2
소요시간	: 24m 22s
*/


#include <iostream>
#include <vector>
#include <array> 
#include <ranges>
#include <algorithm>

using namespace std;

void algoInit()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}

array<bool, 1000000 + 1> table;
vector<int> v;


void Eratos() {
	for (int i = 2; i * i < 1000000 + 1; ++i) {
		if (table[i])
			continue;

		for (int j = 2; j * i < 1000000 + 1; ++j) {
			table[j * i] = true;
		}
	}
}

void PrintNumOfPartition(int num) {
	int ans = 0;
	int prior = 0;
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] > num/2) {
			break;
		}
		if (binary_search(v.begin(), v.end(), num - v[i])) {
			ans++;
		}

		
	}
	cout << ans << "\n";
}

int main()
{
	algoInit();

	Eratos();
	for (int i = 2; i < 1000000 + 1; ++i) {
		if (!table[i]) {
			v.push_back(i);
		}
	}

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int input;
		cin >> input;
		PrintNumOfPartition(input);
	}
}
