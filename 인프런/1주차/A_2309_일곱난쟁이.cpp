#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main()
{
	int sum = 0;
	vector<int> arr;

	for (int i = 0; i < 9; ++i) {
		int input;
		cin >> input;
		arr.push_back(input);
		sum += input;
	}

	for (int i = 0; i < 8; ++i) {
		for (int j = i + 1; j < 9; ++j) {
			if (sum - arr[i] - arr[j] == 100) {
				arr.erase(arr.begin() + j);
				arr.erase(arr.begin() + i);
				sort(arr.begin(), arr.end());

				for (int n : arr) {
					cout << n << "\n";
				}
				return 0;
			}
		}
	}
}