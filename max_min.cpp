#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>arr[n];
int max=-9999,min=9999;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
for(int i=0;i<n;i++)
{
if(arr[i]<min)
min=arr[i];
if(arr[i]>max)
max=arr[i];
}
cout<<"Min:"<<min<<"Max:"<<max;
return 0;
}
