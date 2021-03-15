#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int a=0,b=0,c,id;
	    cin>>c;
	    bool flag=true;
	    for(int i=31;i>=0;i--)
	    {
	        if((1<<i)&c)
	        {
	            id=i;
	            break;
	        }
	    }
	    for(int i=id;i>=0;i--)
	    {
	        if(c&(1<<i))
	        {
	            if(flag)
	            {
	                a|=(1<<i);
	                flag=false;
	            }
	            else
	            b|=(1<<i);
	        }
	        else
	        {
	            a|=(1<<i);
	            b|=(1<<i);
	        }
	    }
	    cout<<a*b<<"\n";
	}
	return 0;
}
