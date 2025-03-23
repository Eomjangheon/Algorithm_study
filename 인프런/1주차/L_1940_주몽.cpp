#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <array>
#include <map>

using namespace std;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<int> arr1;
	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; ++i) {
		int temp;
		cin >> temp;
		arr1.push_back(temp);
	}

	int sum = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (arr1[i] + arr1[j] == k)
				sum++;
		}
	}
	cout << sum;
	
}