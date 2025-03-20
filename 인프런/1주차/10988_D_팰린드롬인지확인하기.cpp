#include<iostream>
using namespace std;

string input,res;

int main() {
	cin >> input;
	res = input;
	reverse(res.begin(), res.end());
	cout << (input == res);

	
}