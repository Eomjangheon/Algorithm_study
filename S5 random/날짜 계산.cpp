/*
Silver5 random
문제이름	: 날짜 계산
문제번호	: 1476
난이도	: s5
소요시간	: 7m 52s
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
    int e, s, m;
    cin >> e >> s >> m;

    int ans = 1;
    int tempE = 1, tempS = 1, tempM = 1;
    while (true) {
        if (e == tempE && s == tempS && m == tempM) {
            cout << ans;
            return 0;
        }
        ans++;
        tempE = (tempE % 15) + 1;
        tempS = (tempS % 28) + 1;
        tempM = (tempM % 19) + 1;
    }

}
