#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int carNum, sum = 0;

	for (int i = 0; i < 5; ++i) {
		cin >> carNum;
		if (carNum == n) sum++;
	}
	cout << sum;
}