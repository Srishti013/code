int firstRepeated(int arr[], int n) {
    int i,j;
    for(i=0;i<=n-2;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(arr[i]==arr[j])
            {
                return i+1;
            }
        }
    }
    return -1;
}
