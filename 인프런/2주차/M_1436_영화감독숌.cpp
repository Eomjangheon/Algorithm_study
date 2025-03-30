#include <iostream>
using namespace std;
int main(void){
   int count=0;
   int input=0;
   int i=666;
    int k=i;
   bool check=true;
   cin>>input;
   
   while(check)
   {
      k=i;
       while(true)
       {
           if((k%1000)==666)
           {
               count++;
               break;
           }
           
           
           k/=10;
           if(k==0)
           break;
       }
       if(count==input)
       {
           cout<<i;
           check=false;
       }
       ++i;
   }
  
    
}
