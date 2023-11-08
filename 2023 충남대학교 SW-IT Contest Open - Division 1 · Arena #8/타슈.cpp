/*
2023 충남대학교 SW-IT Contest Open - Division 1 · Arena #8
2번 문제
문제이름	: 타슈
문제번호	: 30018
난이도	: b3
소요시간	: ??
*/


#include <iostream>
#include <vector>
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

	int n;
	cin >> n;

	vector<int> a;
	vector<int> b;
	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin >> temp;
		a.push_back(temp);
	}

	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin >> temp;
		b.push_back(temp);
	}

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans += abs(a[i] - b[i]);
	}

	cout << ans / 2;
}
