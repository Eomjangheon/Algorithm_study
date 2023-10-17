/*
Silver2 random
문제이름	: 골드바흐의 추측
문제번호	: 2563
난이도	: s2
소요시간	: 15m 21s
*/


#include <iostream>
#include <array>
#include <vector>

using namespace std;

void algoInit()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}

array<bool, 10000> isNotPrime;
vector<int> primeV;

void Eratos() {
	for (int i = 2; i * i < 10000; ++i) {
		if (isNotPrime[i])
			continue;
		for (int j = 2; j * i < 10000; ++j) {
			isNotPrime[i*j] = true;
		}
	}
}

void printPartition(int num) {
	int minGap = 10000;
	int part1 = 0, part2 = 0;

	for (int i = 0; primeV[i] < num; ++i) {
		for (int j = i; primeV[i] + primeV[j] <= num; ++j) {
			if ((primeV[i] + primeV[j] == num) && (primeV[j]-primeV[i]<minGap)) {
				minGap = primeV[j] - primeV[i];
				part1 = primeV[i];
				part2 = primeV[j];
			}
		}
	}
	cout << part1 << " " << part2 << "\n";
}

int main()
{
	algoInit();

	isNotPrime[0] = true;
	isNotPrime[1] = true;
	Eratos();
	
	for (int i = 0; i < 10000; ++i) {
		if (!isNotPrime[i]) {
			primeV.push_back(i);
		}
	}

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		int input;
		cin >> input;
		printPartition(input);
	}
}