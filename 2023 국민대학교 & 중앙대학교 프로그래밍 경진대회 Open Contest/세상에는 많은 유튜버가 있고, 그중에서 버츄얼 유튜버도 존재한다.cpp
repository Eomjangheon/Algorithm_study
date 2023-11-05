/*
���δ��б� & �߾Ӵ��б� ���α׷��� ������ȸ Open Contest �� Arena #7
4�� ����
�����̸�	: ���󿡴� ���� ��Ʃ���� �ְ�, ���߿��� ����� ��Ʃ���� �����Ѵ�
������ȣ	: 29753
���̵�	: s1
�ҿ�ð�	: ??
*/


#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;
void algoInit()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

struct Data {
	int count[52] = { 0 };
	int totalTime[52] = { 0 };
	bool everyWeek = true;
};


int main()
{
    algoInit();
    int N, M;
    cin >> N >> M;

    map<string, Data> youtubers;

    for (int i = 0; i < N; i++) {
        string name;
        int day, startH, startM, endH, endM;
        cin >> name >> day >> startH;
        cin.ignore();
        cin >> startM >> endH;
        cin.ignore();
        cin >> endM;

        int time = (endH * 60 + endM) - (startH * 60 + startM);

        youtubers[name].count[(day - 1) / 7]++;
        youtubers[name].totalTime[(day - 1) / 7] += time;
    }

    vector<string> realYoutubers;

    for (auto& [name, data] : youtubers) {
        for (int i = 0; i < M / 7; ++i)
        {
            if (data.count[i] < 5) {
                data.everyWeek = false;
                break;
            }
            if (data.totalTime[i] < 60 * 60) {
                data.everyWeek = false;
                break;
            }

        }
        if (data.everyWeek) {
            realYoutubers.push_back(name);
        }
    }

    sort(realYoutubers.begin(), realYoutubers.end());

    if (realYoutubers.empty()) {
        cout << -1 << endl;
    }
    else {
        for (const auto& name : realYoutubers) {
            cout << name << endl;
        }
    }

    return 0;
}
