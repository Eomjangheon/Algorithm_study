/*
���δ��б� & �߾Ӵ��б� ���α׷��� ������ȸ Open Contest �� Arena #7
2�� ����
�����̸�	: ���� ��Ʈ��
������ȣ	: 29752
���̵�	: b3
�ҿ�ð�	: ??
*/


#include <iostream>

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
    
	int n;
	int input, count = 0, maxN = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> input;
		if (input != 0)
		{
			count++;
		}
		else
		{
			maxN = max(maxN, count);
			count = 0;
		}
	}
	maxN = max(maxN, count);
	cout << maxN;
}
