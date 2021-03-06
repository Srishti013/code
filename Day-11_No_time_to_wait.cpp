#include<iostream>
using namespace std;
int main()
{
    int n,h,x;
    cin>>n>>h>>x;
    int a[n];
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
       
    }
    for(int i=0;i<n;i++)
    {
         if(x+a[i]>=h)
        {
            cout<<"YES";
            flag=true;
            break;
        }
    }
    if(!flag)
    cout<<"NO";
    return 0;
}
