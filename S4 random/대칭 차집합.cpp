/*
Silver4 random
�����̸�	: ��Ī ������
������ȣ	: 1269
���̵�	: s4
�ҿ�ð�	: 7m 13s
*/


#include <iostream>
#include <set>
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
	set<int> s1;
	set<int> s2;

	int A, B;
	cin >> A >> B;
	for (int i = 0; i < A; ++i) {
		int num;
		cin >> num;
		s1.insert(num);
	}

	for (int i = 0; i < B; ++i) {
		int num;
		cin >> num;
		s2.insert(num);
	}

	int sum = 0;
	sum = count_if(s1.begin(), s1.end(), [s2](int a) {
		return s2.find(a) != s2.end();
		});

	cout << s1.size() + s2.size() - sum * 2;
	
}
