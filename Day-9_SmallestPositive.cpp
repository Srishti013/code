class Solution{
    public:
    int findMissingPositive(int arr[], int n) {
        
        for(int i=0; i<n; i++) {
    	    if(abs(arr[i]) - 1 < n && arr[ abs(arr[i]) - 1] > 0) 
    	    arr[ abs(arr[i]) - 1] = -arr[ abs(arr[i]) - 1]; 
        } 
       
        for(int i=0; i<n; i++) 
            if (arr[i] > 0)
    	        return i+1; 
    
        return n+1; 
    } 
    
    
    int findMissing(int arr[], int n) { 
        
        int shift = segregateArr(arr, n); 
        return findMissingPositive(arr+shift, n-shift); 
    } 
};
