void swapElements(int arr[], int sizeof_array){
    int temp;
   for(int i=0;i+2<sizeof_array;i++)
   {
       temp=arr[i];
       arr[i]=arr[i+2];
       arr[i+2]=temp;
   }
    
}
