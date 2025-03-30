#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int m, n, j;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> m >> n >> j;

	int coverBegin = 1;
	int coverEnd = n;
	int sum = 0;
	while (j--) {
		int pos;
		cin >> pos;
		if (pos >= coverBegin && pos <= coverEnd)continue;


		int mid = (coverBegin + coverEnd) / 2;
		if (mid < pos) {
			int moveRight = abs(pos - coverEnd);
			sum += moveRight;
			coverBegin += moveRight;
			coverEnd += moveRight;
		}
		else {
			int moveLeft = abs(pos - coverBegin);
			sum += moveLeft;
			coverBegin -= moveLeft;
			coverEnd -= moveLeft;
		}

	}
	cout << sum;
}