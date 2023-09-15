/*
��3ȸ �����ڴ��б� ���α׷��� ������ȸ (SMUPC) Open Contest
2�� ���� 
�����̸�	: ������� ��ȭ���� 
������ȣ	: 29700
���̵�	: s4
�ҿ�ð�	: 13m 01s
*/

#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int y, x, n;
	cin >> y >> x >> n;
	
	vector<string> info;
	info.reserve(y);
	string temp;

	for (int i = 0; i < y; ++i)
	{
		cin >> temp;
		info.push_back(temp);
	}

	int ans = 0;
	for (const string s : info)
	{
		int temp = 0;
		for (const char c : s)
		{
			if (c == '0')
			{
				temp++;
				if (temp >= n)
					ans++;
			}
			else
			{
				temp = 0;
			}
		}
	}
	cout<<ans;
}