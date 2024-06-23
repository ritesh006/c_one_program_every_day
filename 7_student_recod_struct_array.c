#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef struct student
{
    char name[100];
    int rollno;
    int marks[3];
    int avg;
}sll;


typedef struct avarage
{
    char name[120];
    int marks;
    int temp;
    char tempN[120];
}avg;
int main(int argc, char const *argv[])
{
    int value = 2;
    sll record[value];
    avg rit[value];
  

  
    
        int array[value];
        for (size_t i = 0; i < value; i++)
        {
          printf("Enter name: ");
          scanf("%s", record[i].name);
          printf("Enter roll no: ");
          scanf("%d", &record[i].rollno);
          printf("Enter marks: ");
          scanf("%d %d %d", &record[i].marks[0], &record[i].marks[1],&record[i].marks[2]);
          record[i].avg=( (record[i].marks[0] + record[i].marks[1] + record[i].marks[2]) / 3);
          rit[i].marks =record[i].avg;
          strcpy(rit[i].name,record[i].name);
        }

        for (size_t i = 0; i < value ; i++)
        {
          printf("name: %s\n", record[i].name);

          printf("roll no: %d\n", record[i].rollno);

          printf("Avarage marks: %d\n",record[i].avg);
        }

        for (size_t i = 0; i < value; i++)
        {
            for (size_t j = 0; j < (value-1); j++)
            {
                if (rit[j].marks > rit[j+1].marks)
                {
                     rit[1].temp = rit[j].marks;
                    rit[j].marks = rit[j+1].marks;
                    rit[j+1].marks = rit[1].temp;

                    char tempName[120];
                    strcpy(tempName, rit[j].name);
                    strcpy(rit[j].name, rit[j+1].name);
                    strcpy(rit[j+1].name,tempName);         
                }
                
            }
            
        }
     
        for (size_t i = 0; i < value; i++)
        {
            printf("avg marks: %d\n",rit[i].marks);
        }
        printf("\n\n");
        for (size_t i = 0; i < value; i++)
        {
            if (rit[1].marks == record[i].avg)
            {
                printf("Topper student name is: %s\n",record[i].name);
            }
            
        }
        
        
        printf("Topper Student Marks is: %d\n",rit[value-1].marks);

    return 0;
}
