#include<stdio.h>
int main()
{
  int num,remainder,sum=0;
  printf("Enter a number");
  scanf("%d",&num);
  while(num != 0)
  {
    remainder=num%10;
    sum+=remainder;
    num=num/10;
  }
  printf("sum=%d",sum);
  return 0;
}
