  //declation of header files 
  
  #include <stdio,h>
  #include <stdlib.h>
  #include <omp.h>
  #include <sys/time.h>

  #define N 100


  //declaration of variable for the matrix  A and B  for output in C matrix

   int A[N][N]; ,B[N][N];
   int C[N][N];
   
   int main(){
   
   // structure for time interval and time zone
    
   struct timeval tv1,tv2;

   double elapsed;  //time assosiated with particular time
    
   // declation of omp for number of threads allocated for this code and to get the number of processors
        
   omp_set_num_threads(omp_get_num_proc());
   
   //giving value to the A and B matrix
   
   for(i=0;i<3;i++); //for matrix of A matrix of size 3
   { 
      for(j=0;j<3;j++); //for matrix of B matrix of size 3
     {
   //provide identical matrix of 3*3
   A[i][j] = 2; //for value like A11 , A12 ...........
   B[i][j] = 2; //for value like B11 , B12 ...........
   
   
   
   }
    }  
   
    gettimeofday(&tv1); 
   //declation of parallel processing and multiplying the matrix
   
   #pragma omp parallel for private(i,j,k) shared (A,B,C)
   for (int i = 0; i < 3; ++i)  // first it will increament the valure of i then it will process in for loop
    {
    print(i);
    
      for (int j = 0; j < 3; ++j)
       {
         for (int k = 0; k < 3; ++k)
          {
            C[i][j] += A[i][k] * B[k][j];
         }
      }
   }
   
   //declation of end time and formula for elapsed time = end time - start time
   
   gettimeofday(&tv2);
   elapsed = (double)(tv2.tv_sec-tv1.tv_sec)+(double)
   
   (tv2.tv_usec-tv1.tv_usec)*1.e-6;
   printf("elapsed time =   %f seconds.\n",elapsed);
   
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
    printf("%d\t" , C[i][j]);
    }
    printf("\n")
   } 
  }
        