#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int strt=0,end=n-1,temp;
  while(strt<end)
  {
    temp=arr[strt];
    arr[strt]=arr[end];
    arr[end]=temp;
    strt++;
    end--;
  }
  for(int i=0;i<n;i++)
  {
cout<<arr[i]<<" ";
  }
  return 0;
}
