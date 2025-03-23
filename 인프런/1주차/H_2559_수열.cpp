



#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;
string str;



int main() {
	int n, k;
	queue<int> q;
	cin >> n >> k;


	int sum = 0;
	int maxSum = -2000000000;
	while (n--) {
		int input;
		cin >> input;
		sum += input;

		q.push(input);
		if (q.size() == k) {
			maxSum = max(sum, maxSum);
			sum -= q.front();
			q.pop();
		}
	}
	cout << maxSum;
}