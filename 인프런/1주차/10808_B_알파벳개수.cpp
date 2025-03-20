#include<iostream>
using namespace std;

int table[26];
string input;

int main() {
	cin >> input;
	for (char c : input) {
		table[c - 'a']++;
	}
	for (int a : table) {
		cout << a << " ";
	}
}