#include <omp.h>
#include <stdio.h>

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b[10]={2,3,4,5,6,7,8,9,10,11};
    int s[10],i;
    
    #pragma omp parallel for
    
      for(i=0;i<10;i++)
      {
        s[i]=a[i]+b[i];
      
    
      printf("\nthread %d sum is %d",omp_get_num_threads,s[i]);
      
      }
      
      return (0);

    
}
  