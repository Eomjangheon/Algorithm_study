/*
��3ȸ �����ڴ��б� ���α׷��� ������ȸ (SMUPC) Open Contest
1�� ���� 
�����̸�	: Welcome to SMUPC! 
������ȣ	: 29699
���̵�	: b5
�ҿ�ð�	: 3m 01s
*/

#include <iostream>
using namespace std;

string str = "WelcomeToSMUPC";

int main()
{
	int input = 0;
	cin >> input;
	cout << str[(input-1) % str.size()];
}