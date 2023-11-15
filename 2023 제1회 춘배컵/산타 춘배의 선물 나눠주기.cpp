/*
2023 제1회 춘배컵
5번 문제
문제이름	: 산타 춘배의 선물 나눠주기
문제번호	: 30406
난이도	: s1
소요시간	: ??
*/

#include <iostream>
#include <queue>
#include <cmath>


using namespace std;

void algoInit()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}

queue<int> q;

int main()
{
	algoInit();

	int nNum[4] = { 0,0,0,0 };
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int num;
		cin >> num;
		nNum[num]++;
	}

	int sum = 0;
	//(0 ^ 3) 3
	//(1 ^ 2) 3
	//(0 ^ 2) 2
	//(1 ^ 3) 2
	//(0 ^ 1) 1
	//(2 ^ 3) 1

	//0,3
	{
		int min03 = min(nNum[0], nNum[3]);
		sum = sum + min03 * 3;
		nNum[0] -= min03;
		nNum[3] -= min03;
	}
	//1,2
	{
		int min12 = min(nNum[1], nNum[2]);
		sum = sum + min12 * 3;
		nNum[1] -= min12;
		nNum[2] -= min12;
	}

	//0,2
	{
		int min02 = min(nNum[0], nNum[2]);
		sum = sum + min02 * 2;
		nNum[0] -= min02;
		nNum[2] -= min02;
	}

	//1,3
	{
		int min13 = min(nNum[1], nNum[3]);
		sum = sum + min13 * 2;
		nNum[1] -= min13;
		nNum[3] -= min13;
	}

	//0,1
	{
		int min01 = min(nNum[0], nNum[1]);
		sum = sum + min01 * 1;
		nNum[0] -= min01;
		nNum[1] -= min01;
	}

	//2,3
	{
		int min23 = min(nNum[2], nNum[3]);
		sum = sum + min23 * 1;
		nNum[2] -= min23;
		nNum[3] -= min23;
	}
	cout << sum;


}