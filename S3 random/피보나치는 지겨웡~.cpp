/*
Silver3 random
�����̸�	: �Ǻ���ġ�� ���ܿ�~
������ȣ	: 17175
���̵�	: s3
�ҿ�ð�	: 19m 04s
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