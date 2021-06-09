#include<stdio.h>
int main()
{
   int i,n;
   printf("\n Enter the number:");
   scanf("%d",&n);
   for(i=1;i<=100;i++)
   {
      if(i%n==0)
      printf("%d \t",i);
   }
   return 0;
}
