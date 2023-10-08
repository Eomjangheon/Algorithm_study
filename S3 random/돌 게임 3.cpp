/*
Silver3 random
문제이름	: 돌 게임 3
문제번호	: 9657
난이도	: s3
소요시간	: 24m 31s
*/


#include <iostream>
using namespace std;


int main()
{
	bool winSK[1001];
	winSK[1] = true;
	winSK[2] = false;
	winSK[3] = true;
	winSK[4] = true;
	winSK[5] = true;
	int n;
	cin >> n;
	for (int i = 6; i <= n; ++i)
	{
		if (!winSK[i - 1] || !winSK[i - 3] || !winSK[i - 4])
			winSK[i] = true;
		else
			winSK[i] = false;
	}
	if (winSK[n])
		cout << "SK";
	else
		cout << "CY";
}