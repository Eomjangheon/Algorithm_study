/*
Silver2 random
문제이름	: 가장 긴 증가하는 부분 수열
문제번호	: 11053
난이도	: s2
소요시간	: 11m 58s
*/


#include <iostream>
#include <vector>
#include <array>
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

	vector<int> v;
	array<int, 1000> cache = {0};
	cache[0] = 1;
	int n;
	cin >> n;
	v.reserve(n);
	
	for (int i = 0; i < n; ++i) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	for (int i = 1; i < n; ++i) {
		int maxN = 0;
		for (int j = 0; j < i; ++j) {
			if (v[j] < v[i]) {
				maxN = max(maxN, cache[j]);
			}
		}
		cache[i] = maxN + 1;
	}

	cout << *max_element(cache.begin(), cache.end());

}