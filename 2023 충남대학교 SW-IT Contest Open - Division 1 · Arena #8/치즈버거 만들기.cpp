/*
2023 �泲���б� SW-IT Contest Open - Division 1 �� Arena #8
1�� ����
�����̸�	: ġ����� �����
������ȣ	: 30017
���̵�	: b4
�ҿ�ð�	: ??
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
