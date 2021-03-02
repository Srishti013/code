#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,c,cnt=0;
	    cin>>n>>c;
	    string s;
	    cin>>s;
	    vector<long long int> pos;
	    for(long long int i=0;i<n+1;i++)
	    {
	       if(s[i]=='1')
	       pos.push_back(i);
	        
	    }
	    for(long long int i=0;i+1<pos.size();i++)
	    {
	       if(pos[i+1]-pos[i]-1>c)
	       cnt++;
	    }
	    if(!pos.empty() && n-pos.back()-1+pos[0]>c)cnt++;
	    if(cnt>1)
	    cout<<"NO"<<"\n";
	    else
	    cout<<"YES"<<"\n";
	}
	return 0;
}
