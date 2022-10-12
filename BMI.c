#include <stdio.h>
#include <omp.h>

int main()
{
  
  
  int h,w,tid,BMI,th;
 
  
  printf("Enter the value of height and Weight ");
  scanf("%d%d",&h,&w);
  
    BMI =((w*703)/(h*h));
   printf("\nBMI is %d",BMI);

 # pragma omp parallel
 {
  tid =omp_get_thread_num();
  th =omp_get_num_procs();



  printf("\nMy thread is  %d:",tid);

  if(tid==0)
  {
    printf("\nI am The Master Thread");
    printf("\nNumber Of thread is %d:",omp_get_num_threads());
    
  }    

  printf("\nNumber Of Processer Available %d:",th);
 
  }
   return (0);
  
 } 
