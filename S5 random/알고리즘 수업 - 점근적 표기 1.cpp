/*
Silver5 random
�����̸�	: �˰��� ���� - ������ ǥ�� 1
������ȣ	: 24313
���̵�	: s5
�ҿ�ð�	: 7m 32s
*/


#include <iostream>


using namespace std;

void algoInit()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}

//a1*x + a0 <= c*n �� n�� n0���� ũ�ų� ����
//n0�϶� ������ ũ�ų� ����
//���Ⱑ ũ�ٸ� ����
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