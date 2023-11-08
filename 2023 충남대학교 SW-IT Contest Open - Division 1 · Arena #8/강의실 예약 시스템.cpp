/*
2023 충남대학교 SW-IT Contest Open - Division 1 · Arena #8
3번 문제
문제이름	: 강의실 예약 시스템
문제번호	: 30019
난이도	: b2
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
	int roomNum, query;
	cin >> roomNum >> query;
	int arr[200001] = { 0 };
	for (int i = 0; i < query; ++i)
	{
		int n, s, e;
		scanf("%d %d %d", &n, &s, &e);
		if (arr[n] <= s)
		{
			printf("YES\n");
			arr[n] = e;
		}
		else
			printf("NO\n");
	}
}
