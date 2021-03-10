#include<bits/stdc++.h>
using namespace std; 
#define int long long


void backtrack(string &s, set<string> &ans, int ind, string str)
{
    if(s.size()==str.size())
    {
        ans.insert(str);
        return;
    }
    
   
    if(isdigit(s[ind]))
    {

        str.push_back('*');
        backtrack(s, ans, ind+1, str);
        str.pop_back();
        
       	str.push_back('@');
        backtrack(s, ans, ind+1, str);
        str.pop_back();

        str.push_back('!');
        backtrack(s, ans, ind+1, str);
        str.pop_back();
    }
    else
    {
    	
        str.push_back(s[ind]);
        backtrack(s, ans, ind+1, str);
        str.pop_back();   
    }
}
 



int32_t main()
{
   
     
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

   	
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
		
		string str = "";
        set<string> ans;
        
        backtrack(s, ans, 0, str);
        
        for(auto i=ans.begin();i!=ans.end();i++)
        	cout << *i << " ";

        cout << "\n";
   	}
   	
    
    return 0;
 
} 
