#include<stdio.h>
#include<math.h>
int main()
{
  float a,b,c,d,root1,root2,real,imaginary;
  printf("Enter values of a,b,c");
  scanf("%f %f %f",&a,&b,&c);
  d=(b*b)-(4*a*c);
  if(d>0)
  {
     root1=(-b+sqrt(d))/(2*a);
     root2=(-b-sqrt(d))/(2*a);
     printf("Two roots are:%.2f and %.2f",root1,root2);
  }
  else if(d==0)
  {
    root1=root2=-b/(2*a);
    printf("Two equal roots are:%.2f and %.2f",root1,root2);
  }
  else
  {
    real=-b/(2*a);
    imaginary=sqrt(-d)/(2*a);
    printf("Two complex roots are: %.2f+i%.2f and %.2f+i%.2f",real,imaginary,real,
    imaginary);
  }
  return 0;
}
