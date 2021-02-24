#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int m,h,t;
	cin>>t;
	while(t--)
	{
	    cin>>m>>h;
	    int bmi=(m/(h*h));
	    if(bmi<=18)
	    {
	        cout<<1;
	    }
	    else if(bmi>18 && bmi<25)
	    {
	        cout<<2;
	    }
	    else if(bmi>24 && bmi<30)
	    cout<<3;
	    else if(bmi>=30)
	    cout<<4;
	    cout<<"\n";
	}
	return 0;
}
