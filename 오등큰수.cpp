/*
���� 17299�� ����
����ū��

����
ũ�Ⱑ N�� ���� A = A1, A2, ..., AN�� �ִ�.������ �� ���� Ai�� ���ؼ� ����ū�� NGF(i)�� ���Ϸ��� �Ѵ�.

Ai�� ���� A���� ������ Ƚ���� F(Ai)��� ���� ��,
Ai�� ����ū���� �����ʿ� �����鼭 ���� A���� ������ Ƚ���� F(Ai)���� ū �� �߿��� ���� ���ʿ� �ִ� ���� �ǹ��Ѵ�.
�׷��� ���� ���� ��쿡 ����ū���� - 1�̴�.

���� ���, A = [1, 1, 2, 3, 4, 2, 1]�� ��� F(1) = 3, F(2) = 2, F(3) = 1, F(4) = 1�̴�.
A1�� �����ʿ� �����鼭 ������ Ƚ���� 3���� ū ���� ���� ������,
NGF(1) = -1�̴�.A3�� ��쿡�� A7�� �����ʿ� �����鼭 F(A3 = 2) < F(A7 = 1) �̱� ������,
NGF(3) = 1�̴�.NGF(4) = 2, NGF(5) = 2, NGF(6) = 1 �̴�.

�Է�
ù° �ٿ� ���� A�� ũ�� N (1 �� N �� 1,000,000)�� �־�����. ��°�� ���� A�� ���� A1, A2, ..., AN (1 �� Ai �� 1,000,000)�� �־�����.

���
�� N���� �� NGF(1), NGF(2), ..., NGF(N)�� �������� ������ ����Ѵ�.
*/

#include <iostream>
#include <stack>

using namespace std;


//ó�� �Է����޴�, �񱳸�����, ������ ������ ���� ����
stack<int> bucket, compareBucket, ans;
//�� ���Ұ� ��� �����ߴ��� �����ϴ� ���̺�
int table[1000001];
void compare(int n)
{
	if (compareBucket.empty())
	{
		ans.push(-1);
		compareBucket.push(bucket.top());
		bucket.pop();
		return;
	}

	if (table[n] < table[compareBucket.top()])
	{
		ans.push(compareBucket.top());
		compareBucket.push(bucket.top());
		bucket.pop();
		return;
	}

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

	//�Է��� ������ ��Ŷ�� �������̺��� �����Ѵ�
	for (int i = 0; i < n; ++i)
	{
		cin >> input;
		bucket.push(input);
		table[input]++;
	}
	while (!bucket.empty())
	{
		compare(bucket.top());
	}
	while (!ans.empty())
	{
		cout << ans.top() << " ";
		ans.pop();
	}


}