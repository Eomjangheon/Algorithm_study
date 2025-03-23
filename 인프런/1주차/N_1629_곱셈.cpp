#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <array>
#include <map>
#include <stack>

using namespace std;

long long mul(long long a, long long b, long long c) {
	long long res = 0;
	if (b == 1)
		return a;

	if (b & 1) {
		long long temp = mul(a, b / 2, c);
		temp %= c;
		res = temp * temp % c;
		res = res * a % c;
	}
	else {
		long long temp = mul(a, b / 2, c);
		temp %= c;
		res = temp * temp % c;
	}
	return res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	long long res = 0;
	long long a, b, c;
	cin >> a >> b >> c;
	if (b == 1) {
		cout << a % c;
		return 0;
	}

	cout << mul(a, b, c);

}