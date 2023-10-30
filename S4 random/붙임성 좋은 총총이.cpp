/*
Silver5 random
문제이름	: 붙임성 좋은 총총이
문제번호	: 26069
난이도	: s4
소요시간	: 18m 44s
*/


#include <iostream>
#include <set>


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
	
	set<string> s;
	s.insert("ChongChong");
	
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string s1, s2;
		cin >> s1 >> s2;

		if (s.find(s1) != s.end()) {
			s.insert(s2);
		}
		if (s.find(s2) != s.end()) {
			s.insert(s1);
		}
	}

	cout << s.size();
}


