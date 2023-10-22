/*
Silver4 random
�����̸�	: ���¾� ���ϸ� ������ �̴ټ�
������ȣ	: 1620
���̵�	: s4
�ҿ�ð�	: 7m 03s
*/


#include <iostream>
#include <map>
#include <algorithm>
#include <sstream>

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
	map<int, string> numKey;
	map<string, int> strKey;
	int n, testCase;
	cin >> n >> testCase;

	for (int i = 1; i <= n; ++i) {
		string s;
		cin >> s;
		numKey.insert(make_pair(i,s));
		strKey.insert(make_pair(s, i));
	}

	for (int i = 0; i < testCase; ++i) {
		string s;
		cin >> s;
		if (isalpha(s[0])) {
			cout<<strKey.find(s)->second<<"\n";
		}
		else {
			cout << numKey.find(stoi(s))->second<<"\n";
		}
	}

	
}
