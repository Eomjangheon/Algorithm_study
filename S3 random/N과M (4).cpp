/*
Silver3 random
�����̸�	: N��M (4)
������ȣ	: 15562
���̵�	: s3
�ҿ�ð�	: 15m 26s
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