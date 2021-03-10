#include<bits/stdc++.h>
using namespace std; 



int32_t main()
{
     
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
    	int n, k;
    	cin >> n >> k;

    	

    	while(k--)
    	{
    		int x = n%10;
    		n = (n^x);

    		if(x==0)
    			break;
    	}

    	cout << n << "\n";
    } 

    return 0;
 
} 
