#include<stdio.h>
int main()
{
  int m1,m2,m3,m4,m5,tot,average;
  printf("Enter marks scored");
  scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
  tot=m1+m2+m3+m4+m5;
  average=tot/5;
  printf("average is %d", average);
}