/*
S5 random
�����̸�	: �ӽ��� �Բ��ϴ� �̴ϰ���
������ȣ	: 25757
���̵�	: s5
�ҿ�ð�	: 5m 05s
*/

//�ߺ� ���� ����?
//set ���

#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<string> s;
	int n;
	char c;
	cin >> n >> c;
	for (int i = 0; i < n; ++i)
	{
		string temp;
		cin >> temp;
		s.insert(temp);
	}
	
	if (c == 'Y')
		cout << s.size();

	if (c == 'F')
		cout << s.size() / 2;

	if (c == 'O')
		cout << s.size() / 3;

}