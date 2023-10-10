/*
Silver3 random
문제이름	: 카드놓기
문제번호	: 18115
난이도	: s3
소요시간	: 19m 17s
*/


#include <iostream>
#include <deque>
#include <stack>
#include <algorithm>
#include <ranges>
using namespace std;
void algoInit()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}


int main()
{
	algoInit();

	deque<int> deck;
	stack<int> order;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int input;
		cin >> input;
		order.push(input);
	}

	for (int i = 1; i <= n; ++i) {
		int input = order.top();
		order.pop();

		if (input == 1) {
			deck.push_back(i);
		}
		else if (input == 2) {
			int temp = deck.back();
			deck.pop_back();
			deck.push_back(i);
			deck.push_back(temp);
		}
		else {
			deck.push_front(i);
		}

	}

	for (int num : deck |views::reverse) {
		cout << num << " ";
	}



}