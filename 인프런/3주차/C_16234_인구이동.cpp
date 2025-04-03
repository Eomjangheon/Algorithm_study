#include <iostream>
#include <queue>
#include <vector>
#include <cstring>

using namespace std;

int n, l, r;
int arr[50][50];
int teamNum[50][50];
int teamSum[1000];

int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };

vector<pair<int,int>> BFS(int y, int x, int num) {

    vector<pair<int, int>> v;


    teamNum[y][x] = num;
    queue<pair<int, int>> q;
    q.push({ y,x });

    while (!q.empty()) {
        int nowY = q.front().first;
        int nowX = q.front().second;
        q.pop();
        v.push_back({ nowY, nowX });
        teamSum[num] += arr[nowY][nowX];

        for (int i = 0; i < 4; ++i) {
            int nextY = nowY + dy[i];
            int nextX = nowX + dx[i];
            if (nextY < 0 || nextY >= n || nextX < 0 || nextX >= n)
                continue;
            if (teamNum[nextY][nextX] != 0)
                continue;
            
            int diff = abs(arr[nextY][nextX] - arr[nowY][nowX]);
            if (diff<l || diff>r)
                continue;

            q.push({ nextY,nextX });
            teamNum[nextY][nextX] = num;

        }
    }
    return v;
    
}


int main() {
   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> l >> r;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    int num;
    int ans = 0;
    do {
        bool flag = false;
        num = 0;
        vector<vector<pair<int, int>>> vv;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (teamNum[i][j] != 0)
                    continue;

                num++;
                vv.push_back(BFS(i, j, num));
                if (vv.back().size() > 1)
                    flag = true;
            }
        }
        if (!flag)
            break;



        for (int i = 1; i <= num; ++i) {
            if (vv[i - 1].size() < 2) continue;

            int total = teamSum[i];
            total /= vv[i - 1].size();

            for (auto pos : vv[i - 1]) {
                arr[pos.first][pos.second] = total;
            }

        }

        ans++;

        vv.clear();
        memset(teamNum, 0, sizeof(teamNum));
        memset(teamSum, 0, sizeof(teamSum));

    } while (num != 0);

    cout << ans;

}

