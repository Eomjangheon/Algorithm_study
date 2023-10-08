/*
Silver3 random
문제이름	: 킹
문제번호	: 1063
난이도	: s3
소요시간	: 24m 4s
*/


#include <iostream>
using namespace std;
string moveCMD[8] = { "R","L","B","T","RT","LT","RB","LB" };
int moveH[8] = { 1,-1,0,0,1,-1,1,-1 };
int moveV[8] = { 0,0,-1,+1,+1,+1,-1,-1 };

int kx, ky, rx, ry;
void judge(int moveDir) {
	if (kx + moveH[moveDir] < 1 || kx + moveH[moveDir] > 8 )
		return;

	if (ky + moveV[moveDir] < 1 || ky + moveV[moveDir] > 8)
		return;

	if (kx + moveH[moveDir] == rx && ky + moveV[moveDir] == ry) {
		if (rx + moveH[moveDir] < 1 || rx + moveH[moveDir] > 8)
			return;

		if (ry + moveV[moveDir] < 1 || ry + moveV[moveDir] > 8)
			return;

		kx += moveH[moveDir];
		ky += moveV[moveDir];
		rx += moveH[moveDir];
		ry += moveV[moveDir];
		return;
	}

	kx += moveH[moveDir];
	ky += moveV[moveDir];
}


int main()
{
	char k, r;
	int kn, rn, n;
	cin >> k >> kn >> r >> rn >> n;
	kx = (int)k - 'A' + 1;
	ky = kn;

	rx = (int)r - 'A' + 1;
	ry = rn;


	for (int i = 0; i < n; ++i) {
		string temp;
		cin >> temp;
		for (int j = 0; j < 8; ++j)
		{
			if (temp == moveCMD[j]) {
				judge(j);
				break;
			}
		}
	}
	cout << char(kx-1+'A') << ky << endl;
	cout << char(rx-1+'A') << ry;

}