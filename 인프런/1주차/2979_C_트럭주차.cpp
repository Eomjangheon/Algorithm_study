#include<iostream>
using namespace std;

int table[3];
int cost[104];

void costSet(int begin, int end) {
	for (int i = begin; i < end; ++i) {
		cost[i]++;
	}
}

int main() {
	for (int i = 0; i < 3; ++i) {
		cin >> table[i];
	}

	for (int i = 0; i < 3; ++i) {
		int begin, end;
		cin >> begin >> end;
		costSet(begin, end);
	}

	int sum = 0;
	for (int a : cost) {
		sum += table[a-1]*a;
	}

	cout << sum;
	
}