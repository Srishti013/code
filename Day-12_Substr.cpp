class Solution
{
    public:
    int countSubstring(string S)
    {
        int up_sum=0,low_sum=0,count=0;
        for(int i=0;i<S.size()-1;i++)
        {
            up_sum=0;
            low_sum=0;
            for(int j=i;j<S.size();j++)
            {
                if(S[j]>=65 && S[j]<=90)
                    up_sum++;
                else if(S[j]>=97 && S[j]<=122)
                    low_sum++;
                if(up_sum!=0 && low_sum!=0 && up_sum==low_sum)
                {
                    count++;
                    
                }
            }
        }
        return count;
    }
};
