#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(k>n)
        cout<<n<<"\n";
        else if(k==0)
        cout<<n<<"\n";
        else if(n==0)
        cout<<0<<"\n";
        else
        cout<<n%k<<"\n";
    }
    return 0;
}
