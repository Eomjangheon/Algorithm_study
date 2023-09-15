/*
제3회 숙명여자대학교 프로그래밍 경진대회 (SMUPC) Open Contest
2번 문제 
문제이름	: 우당탕탕 영화예매 
문제번호	: 29700
난이도	: s4
소요시간	: 13m 01s
*/

#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int y, x, n;
	cin >> y >> x >> n;
	
	vector<string> info;
	info.reserve(y);
	string temp;

	for (int i = 0; i < y; ++i)
	{
		cin >> temp;
		info.push_back(temp);
	}

	int ans = 0;
	for (const string s : info)
	{
		int temp = 0;
		for (const char c : s)
		{
			if (c == '0')
			{
				temp++;
				if (temp >= n)
					ans++;
			}
			else
			{
				temp = 0;
			}
		}
	}
	cout<<ans;
}