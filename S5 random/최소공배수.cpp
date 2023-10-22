/*
Silver5 random
�����̸�	: �ּҰ����
������ȣ	: 13241
���̵�	: s5
�ҿ�ð�	: 8m 20s
*/


#include <iostream>

using namespace std;

void algoInit()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}

//���� * ���� = �ִ����� * �ּҰ����

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
