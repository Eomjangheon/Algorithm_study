/*
2023 �泲���б� SW-IT Contest Open - Division 1 �� Arena #8
2�� ����
�����̸�	: Ÿ��
������ȣ	: 30018
���̵�	: b3
�ҿ�ð�	: ??
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
