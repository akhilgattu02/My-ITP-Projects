#include <stdio.h>
#include <stdlib.h>
struct student_record_t
{
  char Fname[100];
  char Lname[100];
  int BloodName;
  int Branch;
  int year;
  int height;
  int weight;
  
};

int main()
{
  FILE *ptr;
  ptr=fopen("student_record.txt","r");
  if(ptr==NULL)
  {
     printf("File couldn't be opened\n");
  }
  char *(bloodtype[8])={"APOSITIVE","ANEGATIVE","BPOSITIVE","BNEGATIVE","ABPOSITIVE","ABNEGATIVE","OPOSITIVE","ONEGATIVE"};
  char *(Branch[11])={"AI","BM","BT","CHE","CHY","CSE","EE","ES","MA","ME","MSME"};
  struct student_record_t student_record[1000];
  
  int i=0;
  
  while(fscanf(ptr,"%s %s %d %d %d %d %d",student_record[i].Fname,student_record[i].Lname,&student_record[i].BloodName,&student_record[i].Branch,&student_record[i].year,&student_record[i].height,&student_record[i].weight)!=EOF)
 { 
    
    printf("First Name: %s last Name: %s ",student_record[i].Fname,student_record[i].Lname);
    printf("BloodName: %s ",bloodtype[student_record[i].BloodName]);
    printf("Branch: %s ",Branch[student_record[i].Branch]);
    printf("Year: %d Height: %d, Weight: %d \n",student_record[i].year,student_record[i].height,student_record[i].weight);
     i=i+1;
    
 }

  fclose(ptr);
  return EXIT_SUCCESS;
}