/*
Silver1 random
�����̸�	: ���ٲ���
������ȣ	: 1697
���̵�	: s1
�ҿ�ð�	: 11m 50s
*/


#include <iostream>
#include <array>
#include <queue>


using namespace std;

void algoInit()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

array<int, 100001> dis;

void bfs(int now, int target) {
    queue<int> posQ;
    posQ.push(now);
    dis[now] = 0;

    while (!posQ.empty()) {
        int nowPos = posQ.front();
        posQ.pop();
        if (nowPos == target) {
            cout << dis[nowPos];
            return;
        }

        if (nowPos > 0) {
            if (dis[nowPos - 1] > dis[nowPos] + 1) {
                dis[nowPos - 1] = dis[nowPos] + 1;
                posQ.push(nowPos - 1);
            }  
        }
        if (nowPos < 100000) {

            if (dis[nowPos + 1] > dis[nowPos] + 1) {
                dis[nowPos + 1] = dis[nowPos] + 1;
                posQ.push(nowPos + 1);
            }
        }
        if (nowPos * 2 <= 100000) {
            if (dis[nowPos * 2] > dis[nowPos] + 1) {
                dis[nowPos * 2] = dis[nowPos] + 1;
                posQ.push(nowPos * 2);
            }
        }
    }

}

int main()
{
    algoInit();
    for (int& n : dis) {
        n = 100001;
    }
    int now, target;
    cin >> now >> target;

    bfs(now,target);
}
