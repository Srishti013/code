void interchange(int r,int c)
{
    int temp;
    for(int i=0;i<r;i++)
    {
        temp=arr[i][0];
        arr[i][0]=arr[i][c-1];
        arr[i][c-1]=temp;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
   
}
