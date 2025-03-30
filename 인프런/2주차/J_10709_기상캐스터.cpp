#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int sky[100][100];


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int h, w;
	cin >> h >> w;

	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			char c;
			cin >> c;

			if (c == 'c')
				sky[i][j] = 0;
			else if (c == '.')
				sky[i][j] = -1;
		}
	}
	
	for (int time = 1; time < w; ++time) {
		for (int i = 0; i < h; ++i) {
			for (int j = time; j < w; ++j) {
				if (sky[i][j] < 0 && sky[i][j - time] == 0) {
					sky[i][j] = time;
				}
			}
		}
	}

	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			cout << sky[i][j] << " ";
		}
		cout << "\n";
	}

	
}