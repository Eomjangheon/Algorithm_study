/*
Silver5 random
�����̸�	: �����
������ȣ	: 1094
���̵�	: s5
�ҿ�ð�	: 4m 52s
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
    cin >> n;

    int sum = 0;

    for (int i = 0; i < 7; ++i) {
        if (((1<<i) & n) != 0) {
            sum++;
        }
    }
    cout << sum;
}
