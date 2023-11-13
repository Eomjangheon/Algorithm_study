/*
2023 제1회 춘배컵
1번 문제
문제이름	: 감마선을 맞은 컴퓨터
문제번호	: 30402
난이도	: b4
소요시간	: ??
*/

#include <iostream>
#include <cmath>
#include <algorithm>


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
	string s;
	for (int i = 0; i < 15 * 15; ++i) {
		char c;
		cin >> c;
		if (c == 'w') {
			s = "chunbae";
		}
		if (c == 'b') {
			s = "nabi";
		}
		if (c == 'g') {
			s = "yeongcheol";
		}
	}
	cout << s;
}