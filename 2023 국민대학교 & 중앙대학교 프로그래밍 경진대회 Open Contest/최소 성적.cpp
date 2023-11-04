/*
국민대학교 & 중앙대학교 프로그래밍 경진대회 Open Contest · Arena #7
2번 문제
문제이름	: 최장 스트릭
문제번호	: 29752
난이도	: b3
소요시간	: ??
*/


#include <iostream>

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
	int input, count = 0, maxN = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> input;
		if (input != 0)
		{
			count++;
		}
		else
		{
			maxN = max(maxN, count);
			count = 0;
		}
	}
	maxN = max(maxN, count);
	cout << maxN;
}
