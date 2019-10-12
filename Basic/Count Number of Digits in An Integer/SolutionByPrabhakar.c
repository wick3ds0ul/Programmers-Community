#include <stdio.h>
#include <stdlib.h>
int main()
{
   unsigned long long n; //used for accepting large numbers
   int count=0;
   scanf("%llu",&n);
if(n==0)
{
    printf("1");
}
else{
       while(n!=0)
   {
    n=n/10;
    count++;
   }
   printf("%d",count);
}
    return 0;
}
