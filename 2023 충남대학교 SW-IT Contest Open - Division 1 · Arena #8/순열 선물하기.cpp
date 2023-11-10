/*
2023 �泲���б� SW-IT Contest Open - Division 1 �� Arena #8
5�� ����
�����̸�	: ���� �����ϱ�
������ȣ	: 30021
���̵�	: s3
�ҿ�ð�	: ??
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
	int n;
	cin >> n;
	if (n == 1) {
		cout << "YES\n1";
	}
	else if (n == 2) {
		cout << "NO";
	}
	else if (n == 3) {
		cout << "YES\n1 3 2" << endl;
	}
	else {
		cout << "YES\n1 3 2";
		for (int i = 4; i <= n; ++i)
		{
			cout << " " << i;
		}
	}
}
