#include<omp.h>
#include<stdio.h>
int main()
{
  #pragma omp parallel
  printf("hello%d\n",omp_get_num_threads());
}