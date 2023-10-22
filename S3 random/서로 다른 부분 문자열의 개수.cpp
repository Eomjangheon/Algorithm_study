/*
Silver3 random
문제이름	: 서로 다른 부분 문자열의 개수
문제번호	: 11478
난이도	: s3
소요시간	: 3m 20s
*/


#include <iostream>
#include <set>
#include <algorithm>

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
	string input;
	cin >> input;

	for (int i = 0; i < input.size();++i) {
		for (int j = 1; i + j <= input.size(); ++j) {
			s.insert(input.substr(i, j));
		}
	}
	cout << s.size();
}
