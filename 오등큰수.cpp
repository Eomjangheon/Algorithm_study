/*
백준 17299번 문제
오등큰수 골드3 문제
1회 시도 후 성공

문제
크기가 N인 수열 A = A1, A2, ..., AN이 있다.수열의 각 원소 Ai에 대해서 오등큰수 NGF(i)를 구하려고 한다.

Ai가 수열 A에서 등장한 횟수를 F(Ai)라고 했을 때,
Ai의 오등큰수는 오른쪽에 있으면서 수열 A에서 등장한 횟수가 F(Ai)보다 큰 수 중에서 가장 왼쪽에 있는 수를 의미한다.
그러한 수가 없는 경우에 오등큰수는 - 1이다.

예를 들어, A = [1, 1, 2, 3, 4, 2, 1]인 경우 F(1) = 3, F(2) = 2, F(3) = 1, F(4) = 1이다.
A1의 오른쪽에 있으면서 등장한 횟수가 3보다 큰 수는 없기 때문에,
NGF(1) = -1이다.A3의 경우에는 A7이 오른쪽에 있으면서 F(A3 = 2) < F(A7 = 1) 이기 때문에,
NGF(3) = 1이다.NGF(4) = 2, NGF(5) = 2, NGF(6) = 1 이다.

입력
첫째 줄에 수열 A의 크기 N (1 ≤ N ≤ 1,000,000)이 주어진다. 둘째에 수열 A의 원소 A1, A2, ..., AN (1 ≤ Ai ≤ 1,000,000)이 주어진다.

출력
총 N개의 수 NGF(1), NGF(2), ..., NGF(N)을 공백으로 구분해 출력한다.
*/

#include <iostream>
#include <stack>

using namespace std;


//처음 입력을받는, 비교를위한, 정답을 저장할 스택 마련
stack<int> bucket, compareBucket, ans;
//각 원소가 몇번 등장했는지 저장하는 테이블
int table[1000001];

void compare(int n)
{
	//비교할 버킷이 비어있다면 -1을 정답에 push
	//비교용 버킷에 데이터버킷의 top을 push
	if (compareBucket.empty())
	{
		ans.push(-1);
		compareBucket.push(bucket.top());
		bucket.pop();
		return;
	}

	//비교 버킷에서 원하는 숫자가 top에 있다면
	if (table[n] < table[compareBucket.top()])
	{
		ans.push(compareBucket.top());
		compareBucket.push(bucket.top());
		bucket.pop();
		return;
	}

	//비교 버킷에서 원하지 않는 숫자가 top에 있다면
	if (table[n] >= table[compareBucket.top()])
	{
		compareBucket.pop();
		compare(n);
	}

}

int main()
{
	int n, input;
	cin >> n;

	//입력을 저장할 버킷과 원소테이블을 세팅한다
	for (int i = 0; i < n; ++i)
	{
		cin >> input;
		bucket.push(input);
		table[input]++;
	}

	//버킷이 빌때까지 비교를 실행한다
	while (!bucket.empty())
	{
		compare(bucket.top());
	}

	//정답 출력
	while (!ans.empty())
	{
		cout << ans.top() << " ";
		ans.pop();
	}


}