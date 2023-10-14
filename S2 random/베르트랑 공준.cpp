/*
Silver2 random
�����̸�	: ����Ʈ�� ����
������ȣ	: 4948
���̵�	: s2
�ҿ�ð�	: 13m 58s
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


array<bool, 250000> isNotPrime = {false};

void eratos() {
	isNotPrime[0] = true;
	isNotPrime[1] = true;
	for (int i = 2; i * i < 250000; ++i) {
		for (int j = 2; i * j < 250000; ++j) {
			isNotPrime[i * j] = true;
		}
	}
}

int main()
{
	algoInit();
	eratos();


	while (true) {
		int input;
		cin >> input;
		if (input == 0) {
			break;
		}

		cout << count(isNotPrime.begin() + input + 1, isNotPrime.begin() + 2 * input + 1, false)<<"\n";

	}
}