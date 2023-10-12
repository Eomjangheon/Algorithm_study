/*
Silver2 random
�����̸�	: ���� �� �����ϴ� �κ� ����
������ȣ	: 11053
���̵�	: s2
�ҿ�ð�	: 11m 58s
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