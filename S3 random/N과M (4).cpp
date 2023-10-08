/*
Silver3 random
문제이름	: N과M (4)
문제번호	: 15562
난이도	: s3
소요시간	: 15m 26s
*/

#include <iostream>
#include <string>
using namespace std;

string str = "";
int n, m;

void NM(int depth, int num)
{
	str += (char)num + '0';
	if (depth == m){
		for (int i = 0; i < m; ++i) {
			printf("%c ", str[i]);
		}
		printf("\n");
		return;
	}

	for (int i = num; i <= n; ++i) {
		NM(depth + 1, i);
		str.pop_back();
	}

}
int main()
{
	
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		NM(1, i);
		str.pop_back();
	}
}