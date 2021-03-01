#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int k,n;
	    cin>>n>>k;
	    int marks[k];
	    for(int i=0;i<k;i++)
	    {
	        cin>>marks[i];
	    }
	    while(n--)
	    {
	   int tot=0;
	      string s;
	      cin>>s;
	      for(int i=0;i<s.size();i++)
	      {
	          if(s[i]=='1')
	          tot+=marks[i];
	      }
	      cout<<tot<<"\n";
	    }
	}
	return 0;
}
