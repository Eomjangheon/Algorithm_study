/*
Silver2 random
�����̸�	: ������
������ȣ	: 1912
���̵�	: s2
�ҿ�ð�	: 7m 58s
*/


#include <iostream>
#include <vector>
#include <array>
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
	
	int maxAdd = -1001;
	int prev = 0;
	int now = 0;
	
	for (int i = 0; i < n; ++i) {
		int temp;
		cin >> temp;
		
		if (now < temp && now<0) {
			now = temp;
		}
		else {
			now += temp;
		}
		maxAdd = max(maxAdd, now);

	}

	cout << maxAdd;

}