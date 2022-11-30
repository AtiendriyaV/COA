#include <stdio.h>
#include<stdlib.h>
#include<omp.h>
#include<sys/time.h>

void main()
{
int n1,n2,v[2],m[2][2],rv[2];
int i,j;
struct timeval tv1,tv2;
struct timezone tz;
double elapsed;
omp_set_num_threads(omp_get_num_procs());

for(i=0;i<2;i++)

for(j=0;j<2;j++)
{

m[i][j]=2;
//m[i][j]=2;
 
}
printf("\n");

gettimeofday(&tv1,&tz);

printf("elapsed time= %f seconds.",elapsed);
printf("\n");

for(i=0;i<2;i++)
{
v[i]=2;

}

for(i=0;i<2;i++)
{
rv[i]=0;
}
#pragma omp parallel for ordered

for(i=0;i<2;i++)

for(j=0;j<3;j++)

{
rv[j] += m[i][j] * v[i];

printf("%d \t",rv[j]);

}


gettimeofday(&tv2,&tz);

printf(" \n vector: ");

for(i=0;i<2;i++)
{
printf("%d \t ",rv[i]);
}
printf("\n");

elapsed=(double)(tv2.tv_sec-tv1.tv_sec)+(double)(tv2.tv_usec-tv1.tv_usec)*1.e-6;
printf("elapsed time = %f seconds. \n", elapsed);
}

/* 
elapsed time= 0.000000 seconds.
4       4       6       8       8       10
 vector: 8       8
elapsed time = 0.003340 seconds.
*/