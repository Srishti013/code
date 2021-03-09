class Solution{
  public:
    int findLongestConseqSubseq(int arr[], int n)
    {
        unordered_map <int,bool> m;
        
       
        for (int i = 0; i < n; i++) m[arr[i]] = true;
        
        int res = 1, cur, elt;
        
        for (int i = 0; i < n; i++)
        {
            
            if (!m[arr[i]]) continue;
            
            cur = 1;
            elt = arr[i] + 1;
            
           
            while (m[elt])
            {
                cur++;
               
                m[elt] = false;
                elt++;
            }
            
            elt = arr[i] - 1;
            
           
            while (m[elt])
            {
                cur++;
                
                m[elt] = false;
                elt--;
            }
            
         
            res = max (res, cur);
        }
        return res;
    }
};
