#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,i;
	    cin>>n;
	    vector<long long int> a(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a.begin(),a.end());
	   
	 
	    long long int ans1,ans2,ans3;
	    ans1=a[n-1]*a[n-2]+a[n-1]-a[n-2];
	    ans2=a[n-1]*a[0]+a[n-1]-a[0];
	    ans3=a[0]*a[1]+a[1]-a[0];
	    cout<<max({ans1,ans2,ans3})<<"\n";
	}
	return 0;
}
