/*
백준 1935번 문제
후위표기식2 실버2 문제
2회 시도 후 성송

1)틀린이유 데이터를 float으로 써서 큰 수에 대응을 못 했다.

문제
후위 표기식과 각 피연산자에 대응하는 값들이 주어져 있을 때, 
그 식을 계산하는 프로그램을 작성하시오.

입력
첫째 줄에 피연산자의 개수(1 ≤ N ≤ 26) 가 주어진다.
그리고 둘째 줄에는 후위 표기식이 주어진다. 
(여기서 피연산자는 A~Z의 영대문자이며, A부터 순서대로 N개의 영대문자만이 사용되며, 길이는 100을 넘지 않는다) 
그리고 셋째 줄부터 N + 2번째 줄까지는 각 피연산자에 대응하는 값이 주어진다. 
3번째 줄에는 A에 해당하는 값, 4번째 줄에는 B에 해당하는값, 5번째 줄에는 C ...이 주어진다, 
그리고 피연산자에 대응 하는 값은 100보다 작거나 같은 자연수이다.

후위 표기식을 앞에서부터 계산했을 때, 식의 결과와 중간 결과가 - 20억보다 크거나 같고, 20억보다 작거나 같은 입력만 주어진다.

출력
계산 결과를 소숫점 둘째 자리까지 출력한다.
*/
#include<iostream>
#include<stack>

using namespace std;

int n;
int table[26];
stack<double> bucket;
string input_data;
double num1, num2;

//버킷에서 두 숫자를 꺼내 연산하고 다시 버킷에 push한다.
void calc(char op)
{
	num1 = bucket.top();
	bucket.pop();
	num2 = bucket.top();
	bucket.pop();

	if (op == '*')
		bucket.push(num2 * num1);

	else if (op == '/')
		bucket.push(num2 / num1);

	else if (op == '+')
		bucket.push(num2 + num1);

	else if (op == '-')
		bucket.push(num2 - num1);

}

int main()
{
	int temp;
	cin >> n;
	cin >> input_data;

	//테이블에 알파벳에 맞는 숫자를 저장한다
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		table[i] = temp;
	}

	//문장에 순서대로 접근하여 알파벳이면 버킷에 해당 숫자를 테이블에서 찾아 push
	//연산자라면 calc 함수를 호출한다.
	for (int i = 0; i < input_data.length(); ++i)
	{
		if ((int)input_data[i]>=65 && (int)input_data[i] <= 90)
		{
			bucket.push(table[(int)input_data[i]-65]);
		}
		else
		{
			calc(input_data[i]);
		}
	}

	//출력의 형태는 소숫점 2번째 자리까지로 설정한다.
	double ans = bucket.top();
	cout << fixed;
	cout.precision(2);
	cout << ans;
	
}