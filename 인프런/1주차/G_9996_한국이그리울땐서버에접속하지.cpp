#include<iostream>
#include<string>
#include<vector>
using namespace std;
string str;

vector<string> split(const string& str, string delimiter) {
	vector<string>result;
	auto start = 0;
	auto end = str.find(delimiter);
	while(end != string::npos) {
		result.push_back(str.substr(start, end - start));
		start = end + delimiter.size();
		end = str.find(delimiter,start);
	}
	result.push_back(str.substr(start));
	return result;
}

int main() {
	int n;
	cin >> n;
	cin >> str;
	vector<string> res;
	res = split(str, "*");

	while (n--) {
		string input;
		cin >> input;

		if(input.size()<str.size()-1) {
			cout << "NE\n";
			continue;
		}


		if (res[0] != input.substr(0, res[0].size())) {
			cout << "NE\n";
			continue;
		}

		if (res[1] != input.substr(input.size()-res[1].size())) {
			cout << "NE\n";
			continue;
		}

		cout << "DA\n";
		
	}


}