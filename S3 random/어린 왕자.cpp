/*
Silver3 random
문제이름	: 어린 왕자
문제번호	: 1004
난이도	: s3
소요시간	: 14m 22s
*/

//시작점을 감싸는가? +1
//도착점을 감싸는가? +1
//시작점과 도착점을 모두 감싸는가? 0
//이외 0
//

#include <iostream>
#include <cmath>
using namespace std;
void algoInit()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}

void printCount() {
	int startX, startY, endX, endY;
	cin >> startX >> startY >> endX >> endY;

	int circleNum;
	cin >> circleNum;

	int sum = 0;
	for (int i = 0; i < circleNum; ++i) {
		int x, y, r;
		bool inStart;
		bool inEnd;

		cin >> x >> y >> r;
		inStart = pow(startX - x, 2) + pow(startY - y, 2) < pow(r, 2) ? true : false;
		inEnd = pow(endX - x, 2) + pow(endY - y, 2) < pow(r, 2) ? true : false;
		
		if (inStart ^ inEnd) {
			sum++;
		}
	}
	cout << sum << "\n";
}

int main()
{
	algoInit();

	int testCase;
	cin >> testCase;

	for (int i = 0; i < testCase; ++i) {
		printCount();
	}
}