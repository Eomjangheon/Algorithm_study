/*
Silver3 random
문제이름	: 칸토어 집합
문제번호	: 4779
난이도	: s3
소요시간	: 12m 26s
*/


#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <map>
#include <numeric>
#include <cmath>

using namespace std;

void algoInit()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}

vector<int> v;


void rec(int n,int begin,string& s) {
	if (n < 2)
		return;

	for (int i = begin + n / 3; i < begin + n / 3 * 2; ++i) {
		s[i] = ' ';
	}
	rec(n / 3, begin,s);
	rec(n / 3, begin + n / 3 * 2,s);

}

int main()
{
	
	algoInit();
	int n;
	while (cin >> n) {
		int length = pow(3, n);
		string s(length, '-');
		rec(pow(3, n), 0, s);
		cout << s << "\n";
	}

}


