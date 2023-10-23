/*
Silver3 random
�����̸�	: �м� ��
������ȣ	: 1735
���̵�	: s3
�ҿ�ð�	: 6m 20s
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
	//     a/b  +  c/d
	int64_t a, b, c, d;
	cin >> a >> b >> c >> d;
	
	int64_t mul1 = d, mul2 = b;
	a *= mul1;
	b *= mul1;
	c *= mul2;
	d *= mul2;

	a += c;
	// a/b�� �� -> ����ϱ�

	//�ִ� ������� �Ѵ� ������
	int64_t maxDiv = Euclidean(a, b);
	cout << a / maxDiv << " " << b / maxDiv;
}
