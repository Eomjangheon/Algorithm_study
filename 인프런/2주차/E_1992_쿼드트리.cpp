#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int m[64][64];
bool visited[100][100];

const int dy[] = {-1,0,1,0};
const int dx[] = { 0,1,0,-1 };

int ty, tx;
int rain = 0;

string ans = "";

bool check(int sy, int sx, int ey, int ex);


void divCon(int sy, int sx, int ey, int ex) {
	
	if (check(sy, sx, ey, ex)) {
		ans += char(m[sy][sx]+'0');
		return;
	}
	
	ans += '(';
	divCon(sy, sx, (sy + ey) / 2, (sx + ex) / 2);
	divCon(sy, (sx + ex) / 2, (sy + ey) / 2, ex);
	divCon((sy + ey) / 2, sx, ey, (sx + ex) / 2);
	divCon((sy + ey) / 2, (sx + ex) / 2, ey, ex);
	ans += ')';
	
}

bool check(int sy, int sx, int ey, int ex) {
	if (ey - sy == 1) {
		return true;
	}


	int start = m[sy][sx];
	
	for (int i = sy; i < ey; ++i) {
		for (int j = sx; j < ex; ++j) {
			if (m[i][j] != start)
				return false;
		}
	}
	return true;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			char c;
			cin >> c;
			m[i][j] = c - '0';
		}
	}

	divCon(0, 0, n, n);
	cout << ans;
	
}