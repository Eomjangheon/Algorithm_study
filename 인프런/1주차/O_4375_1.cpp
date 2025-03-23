#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <array>
#include <map>
#include <stack>
#include <stdio.h>

using namespace std;
int n;
int main()
{
	/*ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/

	while (scanf("%d", &n) != EOF) {
		long long sum = 1;
		long long l = 1;
		while (true) {
			if (sum % n == 0) {
				cout << l << "\n";
				break;
			}
			sum *= 10;
			sum++;
			sum %= n;
			l++;
		}
	}

}