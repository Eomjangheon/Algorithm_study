/*
제2회 보라매컵 본선 Open Contest · Arena #9
1번 문제
문제이름	: 병영외 급식
문제번호	: 30204
난이도	: b2
소요시간	: ??
*/


#include <iostream>
#include <vector>
#include <string>
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
    
	int n, x;
	int sum = 0;
	cin >> n >> x;
	for (int i = 0; i < n; ++i) {
		int input;
		cin >> input;
		sum += input;
	}

	sum% x == 0 ? cout << "1" : cout << "0";
}
