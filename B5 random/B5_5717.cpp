#include <iostream>

using namespace std;

int main() {
	int first = 1, second = 1;
	
	while (true) {
		cin >> first >> second;
		if (first == 0 && second == 0)
			break;

		cout << first + second << endl;
	}
}