class Solution{
    public:
    int maxSubarraySum(int arr[], int n){
       int t = arr[0];
      int curr = arr[0];

      for (int i = 1; i < n; i++)
       {
          curr = max(arr[i], curr+arr[i]);
          t = max(t, curr);
       }
      return t; 
         
    }
};
