/*
2023 ��1ȸ �����
2�� ����
�����̸�	: ������ ����� 
������ȣ	: 30403
���̵�	: b2
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
	string rainbow0 = "ROYGBIV";
	string rainbow1 = "roygbiv";
	int n;
	cin >> n;

	string s;
	cin >> s;

	bool first = true;
	bool second = true;
	for (char c : rainbow0) {
		if (s.find(c) == std::string::npos) {
			first = false;
			break;
		}
	}

	for (char c : rainbow1) {
		if (s.find(c) == std::string::npos) {
			second = false;
			break;
		}
	}

	if (first && second) {
		cout << "YeS";
	}
	else if (first) {
		cout << "YES";
	}
	else if (second) {
		cout << "yes";
	}
	else {
		cout << "NO!";
	}




}