/*
���δ��б� & �߾Ӵ��б� ���α׷��� ������ȸ Open Contest �� Arena #7
5�� ����
�����̸�	: ��Ȧ�� ���༺
������ȣ	: 29755
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
    int pos;
    int mas;
};


vector<int> nData;
vector<Data> mData;


bool possible(int p)
{
    int minIt = 0;
    int maxIt = nData.size() - 1;


    for (Data d : mData)
    {
        auto it = lower_bound(nData.begin(), nData.end(), d.pos - p / d.mas);
        if (it == nData.end() || *it > d.pos + p / d.mas)
            return false;
    }
    return true;
}

int main()
{
    algoInit();
	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; ++i)
	{
		int temp;
		cin >> temp;
		nData.push_back(temp);
	}

	for (int i = 0; i < M; ++i)
	{
		int temp1, temp2;
		Data tempData;

		cin >> temp1 >> temp2;
		tempData.pos = temp1;
		tempData.mas = temp2;
		mData.push_back(tempData);
	}

	sort(nData.begin(), nData.end());

	int minN = 1;
	int maxN = 200000002;
	if (possible(1)) {
		cout << 1;
		return 0;
	}


	while (true)
	{
		//cout << minN << " , " << maxN << endl;
		if (minN + 1 >= maxN) {
			cout << maxN;
			break;
		}

		int n = (minN + maxN) / 2;
		if (possible(n))
		{
			maxN = n;
		}
		else
			minN = n;
	}
}
