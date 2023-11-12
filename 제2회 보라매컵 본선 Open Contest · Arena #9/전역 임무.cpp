/*
��2ȸ ������� ���� Open Contest �� Arena #9
2�� ����
�����̸�	: ���� �ӹ�
������ȣ	: 30205
���̵�	: s2
�ҿ�ð�	: ??
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
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
    
	vector<int64_t> v;
	int64_t n, m, p;
	bool suc = true;
	cin >> n >> m >> p;

	for (int j = 0; j < n; ++j) {
		int item = 0;
		v.clear();
		for (int i = 0; i < m; ++i) {
			int64_t input;
			cin >> input;

			if (input == -1) {
				item++;
			}
			else {
				v.push_back(input);
			}
		}
		sort(v.begin(), v.end());
		for (int64_t num : v) {

			if (num <= p) {
				p += num;
			}
			else if (num > p) {
				if (item > 0) {
					p *= 2;
				}


				if (num <= p) {
					p += num;
				}
				else {
					suc = false;
				}
			}

		}
		for (int in = 0; in < item; ++in) {
			p *= 2;
		}

	}

	suc ? cout << "1" : cout << "0";
}
