/*
Silver5 random
문제이름	: 알고리즘 수업 - 점근적 표기 1
문제번호	: 24313
난이도	: s5
소요시간	: 7m 32s
*/


#include <iostream>


using namespace std;

void algoInit()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}

//a1*x + a0 <= c*n 단 n은 n0보다 크거나 같다
//n0일때 우항이 크거나 같고
//기울기가 크다면 성립
int main()
{
	algoInit();
	
	int a1, a0, c, n0;
	cin >> a1 >> a0 >> c >> n0;

	if (a1 * n0 + a0 <= c * n0) {
		if (a1 <= c) {
			cout << 1;
			return 0;
		}
	}
	cout << 0;
	
}