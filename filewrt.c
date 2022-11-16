#include <stdio.h>

int main()
{
  char name[50];
  int marks, i, num;
  printf("Enter number of students: ");
  scanf("%d", &num);
  FILE *fptr;
  fptr = fopen("C:\\Users\\student\\Documents\\foread.txt", "w");
  
  if(fptr == NULL)
    printf("Error!");
  for(i = 0; i < num; i++)
  {
    printf("For student %d\n Enter name: ", i+1);
    scanf("%s", name);
    printf("Enter marks: ");
    scanf("%d", &marks);
    fprintf(fptr, "\n Name : %s \nMarks = %d \n", name, marks);
  }
  fclose(fptr);

return 0;
}