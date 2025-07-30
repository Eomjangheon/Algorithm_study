#include <iostream>

using namespace std;

int main() {
	int price, ea, money;
	cin >> price >> ea >> money;
	cout << max(price * ea - money, 0);
}