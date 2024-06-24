#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    char name[120];
    int marks[3];
    int avg;
}records;


int main()
{
    size_t n = 2;
    records data[n];

    for(size_t i = 0; i < n; i++)
    {
        printf("Enter Name: ");
        scanf(" %s",data[i].name);
        printf("Enter Marks: ");
        scanf("%d %d %d",&data[i].marks[0],&data[i].marks[1],&data[i].marks[2]);
        data[i].avg = (data[i].marks[0] + data[i].marks[1] + data[i].marks[2])/3;
 
    }

    for(size_t i = 0; i < n; i++)
    {
        printf("Name is: %s\n",data[i].name);
        printf("marks is: %d %d %d\n", data[i].marks[0],data[i].marks[1],data[i].marks[2]);
        printf("Avg marks is: %d\n", data[i].avg);
    }

    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < n-1-i; i++)
        {
            if(data[j].avg > data[j+1].avg)
            {
                int temp = data[j].avg;
                data[j].avg = data[j+1].avg;
                data[j+1].avg = temp;

                char tstring[120];
                strcpy(tstring, data[j].name);

                strcpy(data[j].name, data[j+1].name);

                strcpy(data[j+1].name, tstring);

            }
        }
    }

    printf("Topper Student Name is: %s\n",data[n-1].name);
    printf("Topper Student Avg is : %d\n",data[n-1].avg);
    return 0;
}