#include<iostream>
using namespace std;
int main()
{
  int k,n;
  cin>>k>>n;
  int arr[n];
  int maxs=-99999,mins=99999,maxi,mini,max=-99999,min=99999;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int b[n];
  for(int i=0;i<n;i++)
  {
    b[i]=a[i];
  }
  for(int i=0;i<n;i++)
  {
       if(arr[i]<mins)
       {
         mins=arr[i];
         mini=i;
       }
       if(arr[i]>maxs)
       {
         maxs=arr[i];
         maxi=i;
       }
  }
  while(k-1)
  {
    arr[maxi]=mins-1;
    b[mini]max+1;
    max=-99999;
    min=99999;
    for(int i=0;i<n;i++)
    {
       if(b[i]<min)
       {
         min=b[i];
         mini=i;
       }
       if(arr[i]>max)
       {
         max=arr[i];
         maxi=i;
       }
    }
    k--;
  }
  cout<<"Max:"<<max<<"\n"<<"Min:"<<min;
  return 0;
}
