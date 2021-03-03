int modInverse(int a, int m)
{
    int i;
    for(i=0;i<=(m-1);i++)
    {
        if((i*a)%m==1)
        {
        return i;
        break;
        }
    }
    if(i>(m-1))
    {
        return -1;
    }
}
