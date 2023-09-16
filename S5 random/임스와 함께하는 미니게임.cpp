/*
S5 random
문제이름	: 임스와 함께하는 미니게임
문제번호	: 25757
난이도	: s5
소요시간	: 5m 05s
*/

//중복 없는 원소?
//set 사용

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