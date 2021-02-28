#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int s;
        cin>>s;
        long long int intro[s];
        for(long long int i=0;i<s;i++)
        {
            cin>>intro[i];
        }
        long long int num_ep[s],tot_dur=0,x;
        for(long long int i=0;i<s;i++)
        {
            cin>>num_ep[i];
            for(long long int j=0;j<num_ep[i];j++)
            {
                cin>>x;
                tot_dur+=x;
                if(j>0)
                tot_dur-=intro[i];
            }
        }
        long long int ans=tot_dur;
        cout<<ans<<"\n";
    }
    return 0;
}
