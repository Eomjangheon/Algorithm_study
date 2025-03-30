#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n;
	cin >> n;


	int nowWin = 0;

	int preHour = 0;
	int preSecond = 0;

	int teamOneSecond = 0;

	int teamTwoSecond = 0;
	while (n--) {
		int team;
		string time;
		cin >> team >> time;

		int hour = stoi(time.substr(0, 2));
		int second = stoi(time.substr(3, 2));

		if (nowWin < 0) {
			teamOneSecond += (hour * 60 + second) - (preHour * 60 + preSecond);
		}
		else if (nowWin > 0) {
			teamTwoSecond += (hour * 60 + second) - (preHour * 60 + preSecond);
		}

		if (team == 1) nowWin--;
		else nowWin++;

		preHour = hour;
		preSecond = second;

		if (n == 0) {
			if (nowWin < 0) {

				teamOneSecond += (48 * 60) - (preHour * 60 + preSecond);
			}
			else if (nowWin > 0) {
				teamTwoSecond += (48 * 60) - (preHour * 60 + preSecond);
			}
		}
		

	}


	cout << setw(2) << setfill('0') << teamOneSecond / 60 << ":" << setw(2) << setfill('0') << teamOneSecond % 60 << "\n";
	cout << setw(2) << setfill('0') << teamTwoSecond / 60 << ":" << setw(2) << setfill('0') << teamTwoSecond % 60 << "\n";

	
}