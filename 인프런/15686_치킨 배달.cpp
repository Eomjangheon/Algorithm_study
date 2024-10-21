/*
문제이름	: 치킨 배달
문제번호	: 15686
난이도	: g5
소요시간	: 27m 45s
풀이	    :
*/

#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<pair<int, int>> homePos;
vector<pair<int, int>> shopPos;
vector<int> selectedShop;
int minDis = 2000000000;

int calcChicDis() {
    int sum = 0;

    for (auto home : homePos) {
        int minDis = 10000;
        int homeY = home.first;
        int homeX = home.second;
        for (int n : selectedShop) {
            int shopY = shopPos[n].first;
            int shopX = shopPos[n].second;
            minDis = min(abs(shopY - homeY) + abs(shopX - homeX), minDis);
        }
        sum += minDis;
    
    
    }

    return sum;
}


void FindMinChicDis(int lastIdx) {
    if (selectedShop.size() == m) {
        int dis = calcChicDis();
        minDis = min(minDis, dis);
        return;
    }

    for (int i = lastIdx + 1; i < shopPos.size(); ++i) {
        selectedShop.push_back(i);
        FindMinChicDis(i);
        selectedShop.pop_back();
    }

}


int main() {
   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    cin >> n >> m;
    

    
    int input;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> input;

            if (input == 1) {
                homePos.push_back({i,j});
            }
            else if (input == 2) {
                shopPos.push_back({ i,j });
            }
        }
    }

    FindMinChicDis(-1);

    cout << minDis;



   
}
