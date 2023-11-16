/*
2023 제1회 춘배컵
6번 문제
문제이름	: 춘배가 선물하는 특별한 하트
문제번호	: 30408
난이도	: g5
소요시간	: ??
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
