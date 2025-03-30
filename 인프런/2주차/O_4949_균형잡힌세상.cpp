#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(void){

    string str;
    stack<int> stackArr;
    while(true)
    {
        while(!stackArr.empty())
        {
            stackArr.pop();
        }
        
        
        getline(cin,str);
        if(str==".")
        break;
        
        for(int i=0;i<str.size();++i)
        {
            if(str[i]=='(')
                stackArr.push(1);
            if(str[i]=='[')
                stackArr.push(2);
                
            if(str[i]==')')
            {
                if(!stackArr.empty())
                {
                    if(stackArr.top()==1)
                        stackArr.pop();
                    else
                    {
                        cout<<"no"<<endl;
                        break;
                    }
                }
                else
                    {
                      cout<<"no"<<endl;
                        break;  
                    }
                
            }
            
            if(str[i]==']')
            {
                if(!stackArr.empty())
                {
                    if(stackArr.top()==2)
                        stackArr.pop();
                    else
                    {
                        cout<<"no"<<endl;
                        break;
                    }
                }
                  else
                    {
                      cout<<"no"<<endl;
                        break;  
                    }
                
            }
            
            if(i==str.size()-1)
            {
                if(stackArr.empty())
                    cout<<"yes"<<endl;
                else
                    cout<<"no"<<endl;
            }
               
            
            
            
        }
    }

}
