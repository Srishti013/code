int columnWithMaxZeros(int N){
    int no_zeros=0,max=-999999,max_col;
    for(int i=0;i<N;i++)
    {
        no_zeros=0;
        for(int j=0;j<N;j++)
        {
            if(M[j][i]==0)
            no_zeros++;
        }
        if(no_zeros>max)
        {
            max=no_zeros;
            max_col=i;
        }
        
    }
    return max_col;
    
    
}
