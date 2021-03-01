int majorityWins(int arr[], int n, int x,int y)
{
    // code here
    int xc=0,yc=0,i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            xc+=1;
        }
        else if(arr[i]==y)
        {
            yc+=1;
        }
    }
    if(xc>yc)
    {
        return x;
    }
    else if(yc>xc)
    {
        return y;
    }
    else
    {
        if(x>y)
        {
            return y;
        }
        else
        {
            return x;
        }
    }
}
