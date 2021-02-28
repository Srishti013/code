#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int ans=1000000,flag=0,prime;
    while(1)
    {
       for(int i=2;i*i<=ans;i++)
       {
           flag=0;
           if(ans%i==0)
           {
               flag=1;
               ans++;
               break;
           }
       }
       if(flag==0)
       {
           prime=ans;
           break;
       }
    }
    while(t--)
    {
        cout<<prime<<"\n";
    }
	return 0;
}
