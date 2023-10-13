/*
Silver2 random
문제이름	: 연속합
문제번호	: 1912
난이도	: s2
소요시간	: 7m 58s
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