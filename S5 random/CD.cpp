/*
S5 random
�����̸�	: CD
������ȣ	: 4158
���̵�	: s5
�ҿ�ð�	: 29m 05s
*/

//�� �ð��ʰ����� �����µ� �׳� cin�� ������ �׷��ſ���..

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	while (true)
	{

		int n, m;
		cin >> n >> m;
		if (n == 0 && m==0)
			return 0;

		vector<int> vn;
		vector<int> vm;
		

		for (int i = 0; i < n; ++i)
		{
			int t;
			scanf("%d",&t);
			vn.push_back(t);
		}

		for (int i = 0; i < m; ++i)
		{
			int t;
			scanf("%d", &t);
			vm.push_back(t);
		}

		int sn = 0, sm = 0;
		int ans = 0;
		while (true)
		{
			if (sn == n || sm == m)
				break;
			if (vn[sn] == vm[sm])
			{
				ans++;
				sn++;
				sm++;
			}
			else if (vn[sn] < vm[sm])
			{
				sn++;
			}
			else
			{
				sm++;
			}

			

		}
		cout << ans << endl;
	}
}