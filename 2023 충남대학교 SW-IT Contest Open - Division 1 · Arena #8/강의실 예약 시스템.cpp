/*
2023 �泲���б� SW-IT Contest Open - Division 1 �� Arena #8
3�� ����
�����̸�	: ���ǽ� ���� �ý���
������ȣ	: 30019
���̵�	: b2
�ҿ�ð�	: ??
*/


#include <iostream>
#include <vector>
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
	int roomNum, query;
	cin >> roomNum >> query;
	int arr[200001] = { 0 };
	for (int i = 0; i < query; ++i)
	{
		int n, s, e;
		scanf("%d %d %d", &n, &s, &e);
		if (arr[n] <= s)
		{
			printf("YES\n");
			arr[n] = e;
		}
		else
			printf("NO\n");
	}
}
