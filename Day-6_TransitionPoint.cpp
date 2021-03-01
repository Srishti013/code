int transitionPoint(int arr[], int n) {
    // code here
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            return i;
        }
    }
    return -1;
}
