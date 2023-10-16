/*
Silver5 random
문제이름	: 색종이
문제번호	: 2563
난이도	: s5
소요시간	: 05m 11s
*/


#include <iostream>
#include <array>

using namespace std;

void algoInit()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}

array<array<bool, 100>, 100> arr;

void draw(int x, int y) {
	for (int i = y; i < y + 10; ++i) {
		for (int j = x; j < x + 10; ++j) {
			arr[i][j] = true;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		draw(x - 1, y - 1);
	}
	int sum = 0;
	for (array<bool,100> tArr : arr) {
		for (bool b : tArr) {
			if (b) {
				sum++;
			}
		}
	}
	cout << sum;
}