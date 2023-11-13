/*
2023 제1회 춘배컵
2번 문제
문제이름	: 무지개 만들기 
문제번호	: 30403
난이도	: b2
소요시간	: ??
*/

#include <iostream>
#include <cmath>
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
	string rainbow0 = "ROYGBIV";
	string rainbow1 = "roygbiv";
	int n;
	cin >> n;

	string s;
	cin >> s;

	bool first = true;
	bool second = true;
	for (char c : rainbow0) {
		if (s.find(c) == std::string::npos) {
			first = false;
			break;
		}
	}

	for (char c : rainbow1) {
		if (s.find(c) == std::string::npos) {
			second = false;
			break;
		}
	}

	if (first && second) {
		cout << "YeS";
	}
	else if (first) {
		cout << "YES";
	}
	else if (second) {
		cout << "yes";
	}
	else {
		cout << "NO!";
	}




}