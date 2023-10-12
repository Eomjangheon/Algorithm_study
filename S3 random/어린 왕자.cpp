/*
Silver3 random
�����̸�	: � ����
������ȣ	: 1004
���̵�	: s3
�ҿ�ð�	: 14m 22s
*/

//�������� ���δ°�? +1
//�������� ���δ°�? +1
//�������� �������� ��� ���δ°�? 0
//�̿� 0
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