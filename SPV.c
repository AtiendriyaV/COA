#include <omp.h>
#include <stdio.h>
int main()
{

int x=9;

#pragma omp parallel for private(x)

for(int i =0;i<5;i++)

{

x=i;
printf("x value is inside parallel %d of thread number %d\n" , x,omp_get_thread_num());
}
printf("x value outside parallel  %d\n",x);
}

