/*
Silver3 random
문제이름	: 거북이
문제번호	: 8911
난이도	: s3
소요시간	: 
*/


#include <iostream>
using namespace std;
void algoInit()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}

int moveX[4] = { 0,1,0,-1 };
int moveY[4] = { 1,0,-1,0 };
int dir = 0, nowX = 0, nowY = 0, maxX = 0, maxY = 0, minX = 0, minY = 0;

void Reset() {
	dir = 0; 
	nowX = 0; 
	nowY = 0; 
	maxX = 0; 
	maxY = 0;
	minX = 0;
	minY = 0;
}

void Move(char c) {
	if (c == 'F') {
		nowX += moveX[dir];
		nowY += moveY[dir];
	}
	else if (c == 'B') {
		nowX -= moveX[dir];
		nowY -= moveY[dir];
	}
	else if (c == 'R') {
		dir++;
		dir %= 4;
	}
	else if (c == 'L') {
		dir += 3;
		dir %= 4;
	}

	maxX = max(nowX, maxX);
	minX = min(nowX, minX);

	maxY = max(nowY, maxY);
	minY = min(nowY, minY);
}





int main()
{
	algoInit();
	int testCase;
	cin >> testCase;

	for (int i = 0; i < testCase; ++i) {
		Reset();

		string input;
		cin >> input;
		for (char c : input) {
			Move(c);
		}
		cout << abs(maxX - minX) * abs(maxY - minY) << "\n";
	}

}