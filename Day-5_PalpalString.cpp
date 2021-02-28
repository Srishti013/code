#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    vector<long long int> freq(26);
    for(auto ch : s)
    {
        freq[ch-'a']++;
    }
    long long int single=0,couple=0;
    for(auto x : freq)
    {
        if(x==1)
        single++;
        if(x%2==0)
        couple+=x/2;
        if(x>3 && x%2!=0)
        couple+=(x-3)/2;
    }
    if(couple>=single)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
    }
	return 0;
}
