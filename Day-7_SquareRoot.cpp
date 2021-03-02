long long int floorSqrt(long long int x) 
{
    int i;
   for(i=1;i<=x;i++)
   {
      if((i*i)==(x))
      {
          return i;
      }
      else if((i*i)>=(x))
      {
          return i-1;
      }
   }
}
