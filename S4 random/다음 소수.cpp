/*
Silver4 random
�����̸�	: ���� �Ҽ�
������ȣ	: 4134
���̵�	: s4
�ҿ�ð�	: 15m 58s
*/


#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void algoInit()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}


bool judgePrime(unsigned int in) {
	for (unsigned int i = 2; i * i <= in; ++i) {
		if (in % i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	algoInit();

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		unsigned int input;
		cin >> input;

		if (input == 0 || input == 1) {
			cout << "2" << "\n";
			continue;
		}

		while (true) {
			
			if (judgePrime(input)) {
				cout << input << "\n";
				break;
			}
			input++;
		}
	}

}
