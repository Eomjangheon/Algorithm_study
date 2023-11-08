/*
2023 충남대학교 SW-IT Contest Open - Division 1 · Arena #8
1번 문제
문제이름	: 치즈버거 만들기
문제번호	: 30017
난이도	: b4
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
	int a, b;
	cin >> a >> b;

	if (a > b)
		cout << b + b + 1;
	else if (b >= a)
		cout << a + a - 1;
}
