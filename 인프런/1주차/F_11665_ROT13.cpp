#include<iostream>
#include<string>
using namespace std;
string str;
int main() {
	getline(cin, str);
	for (char c : str) {
		if (isalpha(c) && isupper(c)) {
			cout << char((c - 'A' + 13) % 26 + 'A');
		}
		else if (isalpha(c) && islower(c)) {
			cout << char((c - 'a' + 13) % 26 + 'a');
		}
		else
			cout << c;
	}
}