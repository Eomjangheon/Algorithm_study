/*
2023 �泲���б� SW-IT Contest Open - Division 1 �� Arena #8
4�� ����
�����̸�	: ġ����� ����� 2
������ȣ	: 30020
���̵�	: s4
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
