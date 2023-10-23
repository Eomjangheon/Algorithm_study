/*
Silver3 random
문제이름	: 분수 합
문제번호	: 1735
난이도	: s3
소요시간	: 6m 20s
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
	//     a/b  +  c/d
	int64_t a, b, c, d;
	cin >> a >> b >> c >> d;
	
	int64_t mul1 = d, mul2 = b;
	a *= mul1;
	b *= mul1;
	c *= mul2;
	d *= mul2;

	a += c;
	// a/b가 답 -> 약분하기

	//최대 공약수로 둘다 나누기
	int64_t maxDiv = Euclidean(a, b);
	cout << a / maxDiv << " " << b / maxDiv;
}
