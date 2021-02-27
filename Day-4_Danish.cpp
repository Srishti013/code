#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[10];
        for(int i=0;i<10;i++)
        {
            cin>>a[i];
        }
        int k;
        cin>>k;
        int left,diff;
        if(a[9]>k)
        {
           cout<<10<<'\n';
           continue;
        }
        else
        {
            left=k-a[9];
        }
        for(int i=9;i<=1;i--)
        {
            diff=i;
            if(left==0 && a[i-1]>0)
            {
                cout<<diff<<"\n";
                break;
            }
            if(a[i-1]==0)
            {
                continue;
            }
             
            else
            {
                if(k>=a[i-1])
                {
                    left=k-a[i-1];
                }
                else 
                {
                    cout<<diff<<"\n";
                    break;
                }
            }
        }
    }
}
