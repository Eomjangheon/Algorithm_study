/*
���δ��б� & �߾Ӵ��б� ���α׷��� ������ȸ Open Contest �� Arena #7
1�� ����
�����̸�	: �ﰢ��
������ȣ	: 29751
���̵�	: b5
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
    
    float w, h;
    cin >> w >> h;
    cout << fixed;
    cout.precision(1);
    cout << w * h / 2;
}
