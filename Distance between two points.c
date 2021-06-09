#include<stdio.h>
#include<math.h>
int main()
{
  int x1,y1,x2,y2;
  float distance=0.0;
  printf("Enter the x and y coordinates: ");
  scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
  distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
  printf("%f",distance);
  return 0;
}
