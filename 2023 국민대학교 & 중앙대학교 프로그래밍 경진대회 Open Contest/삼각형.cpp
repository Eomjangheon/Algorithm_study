/*
국민대학교 & 중앙대학교 프로그래밍 경진대회 Open Contest · Arena #7
1번 문제
문제이름	: 삼각형
문제번호	: 29751
난이도	: b5
소요시간	: ??
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
    
    float w, h;
    cin >> w >> h;
    cout << fixed;
    cout.precision(1);
    cout << w * h / 2;
}
