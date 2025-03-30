#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n;
	cin >> n;

	while (n--) {
		int input;
		cin >> input;
		int sum = 0;
		int fives = 1;
		while(fives <= input) {
			fives *= 5;
			sum += input / fives;
		}
		cout << sum << "\n";
	}

	
}