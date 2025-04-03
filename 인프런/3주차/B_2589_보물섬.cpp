#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int sizeY, sizeX;
char mapArr[50][50];
bool visited[50][50];

int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };


int BFS(int y, int x);
void clearTable();



int main() {
   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> sizeY >> sizeX;
    for (int i = 0; i < sizeY; ++i) {
        for (int j = 0; j < sizeX; ++j) {
            cin >> mapArr[i][j];
        }
    }
    

    int maxD = 0;
    for (int i = 0; i < sizeY; ++i) {
        for (int j = 0; j < sizeX; ++j) {
            if (mapArr[i][j] == 'W')
                continue;

            int nowD = BFS(i, j);
            maxD = max(maxD, nowD);

            clearTable();
        }
    }

    cout << maxD;
}

int BFS(int y, int x) {
    int maxD = 0;
    queue < pair<int, int> >q;
    queue <int> d;
    q.push({ y,x });
    d.push(0);
    visited[y][x] = true;


    while (!q.empty()) {
        int nowY = q.front().first;
        int nowX = q.front().second;
        int nowD = d.front();

        maxD = max(maxD, nowD);

        q.pop();
        d.pop();

        

        for (int i = 0; i < 4; ++i) {
            int nextY = nowY + dy[i];
            int nextX = nowX + dx[i];

            if (nextY < 0 || nextY >= sizeY || nextX < 0 || nextX >= sizeX)
                continue;
            if (visited[nextY][nextX])
                continue;
            if (mapArr[nextY][nextX] == 'W')
                continue;

            visited[nextY][nextX] = true;
            d.push(nowD + 1);
            q.push({ nextY,nextX });
        }
      
    }

    return maxD;
}

void clearTable() {
    for (int i = 0; i < 50; ++i) {
        for (int j = 0; j < 50; ++j) {
            visited[i][j] = false;
        }
    }
}
