/*
제3회 숙명여자대학교 프로그래밍 경진대회 (SMUPC) Open Contest
3번 문제 
문제이름	: 모스 부호
문제번호	: 29701
난이도	: b2
소요시간	: 35m 05s
*/

#include <iostream>
using namespace std;

int main()
{
	string key[42] = { "A","B","C","D","E","F","G",
	"H","I","J","K","L","M","N","O","P","Q","R","S","T"
	,"U","V","W","X","Y","Z","1","2","3","4","5","6",
	"7","8","9","0",",",".","?",":","-","@" };

	string code[42] = { ".-","-...","-.-.","-..",".","..-.","--.",
	"....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-"
	,"..-","...-",".--","-..-","-.--","--..",".----","..---","...--","....-",".....","-....",
	"--...","---..","----.","-----","--..--",".-.-.-","..--..","---...","-....-",".--.-." };


	int len;
	cin >> len;
	for (int i = 0; i < len; ++i)
	{
		string temp="";
		cin >> temp;
		for (int j=0;j<42;++j)
		{
			if (temp == code[j])
				cout << key[j];
		}
	}

}