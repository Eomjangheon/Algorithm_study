/*
2023 충남대학교 SW-IT Contest Open - Division 1 · Arena #8
4번 문제
문제이름	: 치즈버거 만들기 2
문제번호	: 30020
난이도	: s4
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
	int a, b;
	cin >> a >> b;
	if (a <= b) {
		cout << "NO";
	}
	else if ((a - b) > b) {
		cout << "NO";
	}

	else if ((a - b) > a / 2) {
		cout << "NO";
	}
	else {
		cout << "YES" << endl;
		cout << a - b << endl;
		for (int i = 0; i < a - b - 1; ++i)
		{
			cout << "aba" << endl;
		}
		for (int i = 0; i < a - (a - b - 1) * 2 - 1; ++i)
		{
			cout << "ab";
		}
		cout << "a" << endl;
	}
}
