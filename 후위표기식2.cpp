/*
���� 1935�� ����
����ǥ���2 �ǹ�2 ����
2ȸ �õ� �� ����

1)Ʋ������ �����͸� float���� �Ἥ ū ���� ������ �� �ߴ�.

����
���� ǥ��İ� �� �ǿ����ڿ� �����ϴ� ������ �־��� ���� ��, 
�� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �ǿ������� ����(1 �� N �� 26) �� �־�����.
�׸��� ��° �ٿ��� ���� ǥ����� �־�����. 
(���⼭ �ǿ����ڴ� A~Z�� ���빮���̸�, A���� ������� N���� ���빮�ڸ��� ���Ǹ�, ���̴� 100�� ���� �ʴ´�) 
�׸��� ��° �ٺ��� N + 2��° �ٱ����� �� �ǿ����ڿ� �����ϴ� ���� �־�����. 
3��° �ٿ��� A�� �ش��ϴ� ��, 4��° �ٿ��� B�� �ش��ϴ°�, 5��° �ٿ��� C ...�� �־�����, 
�׸��� �ǿ����ڿ� ���� �ϴ� ���� 100���� �۰ų� ���� �ڿ����̴�.

���� ǥ����� �տ������� ������� ��, ���� ����� �߰� ����� - 20�ﺸ�� ũ�ų� ����, 20�ﺸ�� �۰ų� ���� �Է¸� �־�����.

���
��� ����� �Ҽ��� ��° �ڸ����� ����Ѵ�.
*/
#include<iostream>
#include<stack>

using namespace std;

int n;
int table[26];
stack<double> bucket;
string input_data;
double num1, num2;

//��Ŷ���� �� ���ڸ� ���� �����ϰ� �ٽ� ��Ŷ�� push�Ѵ�.
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

	//���̺� ���ĺ��� �´� ���ڸ� �����Ѵ�
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		table[i] = temp;
	}

	//���忡 ������� �����Ͽ� ���ĺ��̸� ��Ŷ�� �ش� ���ڸ� ���̺��� ã�� push
	//�����ڶ�� calc �Լ��� ȣ���Ѵ�.
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

	//����� ���´� �Ҽ��� 2��° �ڸ������� �����Ѵ�.
	double ans = bucket.top();
	cout << fixed;
	cout.precision(2);
	cout << ans;
	
}