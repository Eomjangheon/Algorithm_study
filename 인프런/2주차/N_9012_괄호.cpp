#include<iostream>
#include<vector>

using namespace std;

int main()
{
    string input;

    int testCase;
    cin>>testCase;
    for(int i=0;i<testCase;++i)
    {
        vector<char> tempStack;
        cin>>input;
        for(int k=0;k<input.size();++k)
        {
            if(input[k]=='(')
                tempStack.push_back(input[k]);
            else
            {
                if(tempStack.empty())
                {
                    tempStack.push_back(999);
                }
                else if(tempStack.back()=='(')
                {
                    tempStack.pop_back();
                }
            }
        }
     
        if(tempStack.empty())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
 
    }
}