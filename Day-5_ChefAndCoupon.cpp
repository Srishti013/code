#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int d,c;
    cin>>d>>c;
    int a[3],b[3];
    for(int i=0;i<3;i++)
    cin>>a[i];
    for(int i=0;i<3;i++)
    cin>>b[i];
    int tot_cost_wc=2*d,tot_cost_c=0,tot_cost_ca=0,tot_cost_cb=0;
    for(int i=0;i<3;i++)
    {
        tot_cost_wc= tot_cost_wc+a[i]+b[i];
        tot_cost_ca+=a[i];
        tot_cost_cb+=b[i];
    }
    if(tot_cost_ca<150)
    {
         tot_cost_ca+=d;
    }
    if(tot_cost_cb<150)
    {
         tot_cost_cb+=d;
    }
    if((tot_cost_ca+tot_cost_cb+c)<tot_cost_wc)
    {
        cout<<"YES"<<"\n";
    }
    else
    cout<<"NO"<<"\n";
    }
    return 0;
}
