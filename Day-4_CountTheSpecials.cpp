int countSpecials(int arr[], int sizeof_array, int K){
    
    int hash[1001] = {0};
    
    int f = floor(sizeof_array/K), count = 0;
    
    
    for(int i = 0;i<sizeof_array;i++){
        hash[arr[i]]++;
    }
    
    
    for(int i = 0;i<sizeof_array;i++){
        if(hash[arr[i]] == f){
            count++;
            hash[arr[i]]=-1;
        }
      
    }
      
    
    return count;

}
