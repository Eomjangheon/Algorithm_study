/*
Silver3 random
문제이름	: 통계학
문제번호	: 2108
난이도	: s3
소요시간	: 19m 26s
*/


#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <map>
#include <numeric>
#include <cmath>

using namespace std;

void algoInit()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}
vector<int> v;
int n;

void ArithmeticMean() 
{
	int sum = accumulate(v.begin(), v.end(), 0);
	float average = (float)sum / v.size();
	average = round(average);

	cout << (int)average << "\n";
}
void Median()
{
	cout << v[(n - 1) / 2] << "\n";
}
array<int, 8001> ea = { 0 };
void Mode()
{
	
	for (int num : v) {
		ea[num + 4000]++;
	}

	int max = *max_element(ea.begin(), ea.end());
	
	vector<int> ModeV;
	for (int i = 0; i <= 8000; ++i) {
		if (ea[i] == max) {
			ModeV.push_back(i - 4000);
		}
	}
	if (ModeV.size() >= 2) {
		cout << ModeV[1] << "\n";
	}
	else {
		cout << ModeV[0] << "\n";
	}
}
void Range()
{
	cout << v.back() - v.front();
}

int main()
{
	algoInit();

	cin >> n;
	for (int i = 0; i < n; ++i) {
		int input;
		cin >> input;
		v.push_back(input);
	}

	sort(v.begin(), v.end());

	ArithmeticMean();
	Median();
	Mode();
	Range();
}


