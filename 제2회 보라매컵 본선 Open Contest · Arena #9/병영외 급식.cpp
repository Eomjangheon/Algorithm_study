/*
��2ȸ ������� ���� Open Contest �� Arena #9
1�� ����
�����̸�	: ������ �޽�
������ȣ	: 30204
���̵�	: b2
�ҿ�ð�	: ??
*/


#include <iostream>
#include <vector>
#include <string>
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
    
	int n, x;
	int sum = 0;
	cin >> n >> x;
	for (int i = 0; i < n; ++i) {
		int input;
		cin >> input;
		sum += input;
	}

	sum% x == 0 ? cout << "1" : cout << "0";
}
