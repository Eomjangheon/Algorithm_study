/*
2023 ��1ȸ �����
6�� ����
�����̸�	: ��谡 �����ϴ� Ư���� ��Ʈ
������ȣ	: 30408
���̵�	: g5
�ҿ�ð�	: ??
*/

#include <iostream>
#include <queue>
#include <cmath>


using namespace std;

void algoInit()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}

#include <iostream>
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

    int64_t a, m;
    cin >> a >> m;

    int64_t level = 1;
    int64_t gap = 1;

    while (level <= 60) {
        int64_t lowerBound = m - gap;
        int64_t upperBound = m + gap;

        if (a >= lowerBound && a <= upperBound) {
            cout << "YES";
            return 0;
        }

        if (a < lowerBound) {
            break;
        }

        m *= 2;
        gap = 1LL << level;
        level++;
    }

    cout << "NO";
    return 0;
}
