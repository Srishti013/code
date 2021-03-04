int isPlaindrome(char s[])
{
 int c=0;
 for(int i=0;s[i]!='\0';i++)
 {
     c++;
 }
 for(int i=0;i<c/2;i++)
 {
     if(s[i]!=s[c-i-1])
     {
         return 0;
     }
 }
  return 1;
}
