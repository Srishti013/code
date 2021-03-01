int immediateSmaller(int arr[], int n, int x)
{
   int i,leastdiff=10000,diff,ldn,flag=0;
   for(i=0;i<n;i++)
   {
       if(arr[i]>=x)
       {
           continue;
       }
       diff=x-arr[i];
       if(diff<leastdiff)
       {
           leastdiff=diff;
           ldn=arr[i];
           flag=1;
       }
   }
   if(flag==1)
   {
       return ldn;
   }
   else
   {
       return -1;
   }
    
}
