#include <stdio.h>
 
int main()
{
   int n, rev = 0;
 
   
   scanf("%d", &n);
 
   while (n != 0)
   {
      rev = rev * 10;
      rev = rev + n%10;
      n       = n/10;
   }
 
   printf("%d", rev);
 
   return 0;
}
