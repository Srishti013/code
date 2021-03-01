vector<int> leaders(int arr[], int n){
    // code here
    vector<int> a;
    int i,max=arr[n-1],strt,end,temp;
    a.push_back(arr[n-1]);
    for(i=n-2;i>=0;i--)
    {
        if(max<=arr[i])
        {
            a.push_back(arr[i]);
            max=arr[i];
        }
    }
    reverse(a.begin(),a.end());
    return a;
}
