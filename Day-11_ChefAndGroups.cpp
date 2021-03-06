#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int grps=0;
        bool sw=false;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='1' && sw==false)
                {
                    grps++;
                    sw=true;
                }
            else if(s[i]=='0')
            {
                sw=false;
            }
        }
        cout<<grps<<"\n";
    }
    return 0;

}
