void convertToWave(int *arr, int n){
    
    int i,j=1,temp,strt,end;
    for(i=0;n-i>=2;i+=2,j+=2)
    {
        strt=i;
        end=j;
        while(strt<end)
        {
           temp=arr[strt];
           arr[strt]=arr[end];
           arr[end]=temp;
           strt+=1;
           end-=1;
        }
    }
    
}
