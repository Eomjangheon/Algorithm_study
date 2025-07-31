#include <iostream>

using namespace std;

int arr[3]{ 300,60,10 };
int ans[3];
int main() {
	int time;
	cin >> time;

	for (int i = 0; i < 3; ++i) {
		ans[i] = time / arr[i];
		time %= arr[i];
	}

	if (time) {
		cout << -1;
	}
	else {
		for (int i = 0; i < 3; ++i) {
			cout << ans[i] << " ";
		}
	}

}