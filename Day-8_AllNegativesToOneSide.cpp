#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	int b[n],c=0;
	for(int i=0;i<n;i++)
	{
	 if(a[i]<0)
	 {
	     b[c]=a[i];
	     c++;
	 }
	}
	for(int i=0;i<n;i++)
	{
	    if(a[i]>=0)
	    {
	        b[c]=a[i];
	        c++;
	    }
	}
	for(int i=0;i<n;i++)
	{
	    cout<<b[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
