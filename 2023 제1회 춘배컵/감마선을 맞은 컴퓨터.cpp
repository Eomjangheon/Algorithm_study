/*
2023 ��1ȸ �����
1�� ����
�����̸�	: �������� ���� ��ǻ��
������ȣ	: 30402
���̵�	: b4
�ҿ�ð�	: ??
*/

#include <iostream>
#include <cmath>
#include <algorithm>


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
	string s;
	for (int i = 0; i < 15 * 15; ++i) {
		char c;
		cin >> c;
		if (c == 'w') {
			s = "chunbae";
		}
		if (c == 'b') {
			s = "nabi";
		}
		if (c == 'g') {
			s = "yeongcheol";
		}
	}
	cout << s;
}