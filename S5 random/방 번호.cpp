/*
Silver5 random
문제이름	: 방 번호
문제번호	: 1475
난이도	: s5
소요시간	: 7m 52s
*/


#include <iostream>
#include <map>


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
    
    map<char, int> m;
    string s;
    cin >> s;
    for (char c : s) {
        if (m.find(c) != m.end()) {
            m[c]++;
        }
        else {
            m.insert(make_pair(c, 1));
        }
    }
    m['9'] = (m['9'] + m['6'] + 1) / 2;
    m['6'] = 0;

    cout << max_element(m.begin(), m.end(), [](pair<char,int> p1, pair<char,int> p2) {
        return p1.second < p2.second;
        })->second;
    
}
