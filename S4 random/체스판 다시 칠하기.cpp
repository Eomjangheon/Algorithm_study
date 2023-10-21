/*
Silver4 random
문제이름	: 체스판 다시 칠하기
문제번호	: 1018
난이도	: s4
소요시간	: 15m 03s
*/


#include <iostream>
#include <string>;
#include <vector>
using namespace std;

void algoInit()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}
vector<string> v;
int minN = 2500;

string table1[8] = {
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
};

string table2[8] = {
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
};
void calcAns(int y, int x)
{
	int sum = 0;
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			if (table1[i][j] != v[i + y][j + x]) {
				sum++;
			}
		}
	}
	minN = min(sum, minN);

	sum = 0;
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			if (table2[i][j] != v[i + y][j + x]) {
				sum++;
			}
		}
	}
	minN = min(sum, minN);
}



int main()
{
	
	algoInit();
	int y, x;
	cin >> y >> x;
	v.reserve(y);

	for (int i = 0; i < y; ++i) {
		string input;
		cin >> input;
		v.push_back(input);
	}

	for (int i = 0; i <= y - 8; ++i) {
		for (int j = 0; j <= x - 8; ++j) {
			calcAns(i, j);
		}
	}
	cout << minN;
}
