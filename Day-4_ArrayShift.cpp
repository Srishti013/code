bool arrayShift(vector<int> elements) {
        int n=elements.size();
        int nexti,nextj,previ,prevj;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=i+1;
        }
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
            nexti=i+1;
            previ=n-1;
            }
            else if(i==n-1)
            {
                nexti=0;
                previ=i-1;
            }
            else{
                nexti=i+1;
                previ=i-1;
            }
            for(int j=0;j<n;j++)
            {
                 if(j==0)
                    {
                       nextj=j+1;
                       prevj=n-1;
                    }
                else if(j==n-1)
                    {
                       nextj=0;
                       prevj=j-1;
                     }
                else{
                       nextj=j+1;
                       prevj=j-1;
                   }
                if(arr[j]==elements[i])
                {
                    if(((elements[nexti]!=arr[nextj] && elements[nexti]!=arr[prevj]) || (elements[previ]!=arr[prevj] && elements[previ]!=arr[nextj])) || elements[previ]==elements[nexti] )
                        return false;
                }
            }
            return true;
        } 
         
}
