#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,flag=0;
	    long long int sum=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=0;i<n;i++)
	    {
	        if((i+1)>=a[i])
	        {
	            sum=sum+(i+1)-a[i];
	            flag=i;
	        }
	        else
	        break;
	    }
	    if(sum%2==0 || flag<n-1)
	    {
	        cout<<"Second"<<"\n";
	    }
	    else
	    cout<<"First"<<"\n";
	}
	return 0;
}
