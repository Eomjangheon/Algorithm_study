/*
Silver5 random
문제이름	: 최소공배수
문제번호	: 13241
난이도	: s5
소요시간	: 8m 20s
*/


#include <iostream>

using namespace std;

void algoInit()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}

//정수 * 정수 = 최대공약수 * 최소공배수

int Euclidean(int64_t a, int64_t b) {
	while (true) {
		if (a < b) {
			swap(a, b);
		}

		if (a % b == 0) {
			return b;
		}
		a = a % b;
	}
}

int main()
{
	algoInit();

	int64_t a, b;
	cin >> a >> b;
	cout << a * b / Euclidean(a, b);
}
