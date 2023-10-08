/*
Silver3 random
문제이름	: 피보나치는 지겨웡~
문제번호	: 17175
난이도	: s3
소요시간	: 19m 04s
*/


#include <iostream>
using namespace std;

long long int cache[51] = { 0 };


int main()
{
	cache[0] = 1;
	cache[1] = 1;
	cache[2] = 3;
	int n;
	cin >> n;
	for (int i = 3; i <= n; ++i)
	{
		cache[i] = cache[i - 1] + cache[i - 2] + 1;
		cache[i] %= 1000000007;
	}

	cout << cache[n] << endl;
}