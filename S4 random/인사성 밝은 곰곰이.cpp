/*
Silver4 random
문제이름	: 도키도키 간식드리미
문제번호	: 25192
난이도	: s4
소요시간	: 20m 22s
*/


#include <iostream>
#include <set>

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
    set<string> s;
    for (int i = 0; i < n; ++i) {
        
        string input;
        cin >> input;
        if (input == "ENTER") {
            sum += s.size();
            s.clear();
        }
        else {
            s.insert(input);
        }

    }
    sum += s.size();
    cout << sum;
}
