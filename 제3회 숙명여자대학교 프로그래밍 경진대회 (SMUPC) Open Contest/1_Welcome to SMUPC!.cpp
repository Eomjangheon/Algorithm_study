/*
제3회 숙명여자대학교 프로그래밍 경진대회 (SMUPC) Open Contest
1번 문제 
문제이름	: Welcome to SMUPC! 
문제번호	: 29699
난이도	: b5
소요시간	: 3m 01s
*/

#include <iostream>
using namespace std;

string str = "WelcomeToSMUPC";

int main()
{
	int input = 0;
	cin >> input;
	cout << str[(input-1) % str.size()];
}