/*
Silver2 random
문제이름	: 좌표압축
문제번호	: 18870
난이도	: s2
소요시간	: 11m 14s
*/


#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

void algoInit()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}

vector<int> v;
set<int> s;
map<int, int> m;

int main()
{
	algoInit();
	
	int n;
	cin >> n;
	v.reserve(n);

	for (int i = 0; i < n; ++i) {
		int input;
		cin >> input;
		v.push_back(input);
		s.insert(input);
	}

	int index = 0;
	for (int num : s) {
		m.insert(make_pair(num, index));
		index++;
	}

	for (int num : v) {
		cout << m[num] << " ";
	}

	
}