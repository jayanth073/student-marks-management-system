#include<stdio.h>
#include<string.h>
#include<math.h>
struct details
{
    int roll;
   char name[100];
   float marks[3];
   float total;
   float avg;
   char Grade;


};
typedef struct details student;
student s1;

void calculate (student *s)
{
   s->total=0;
    for(int i=0;i<3;i++)
    {
       s->total=s->total+s->marks[i];  
    }
    s->avg=s->total/3;

    if(s->avg>=90)
    {
        s->Grade='A';
    }
    else if (s->avg>=75)
    {
        s->Grade='B';
    }
    else if(s->avg>=50)
    {
        s->Grade='C';
    }
    else
    {
        s->Grade='F';
    }
}

void display(student s)
{
 printf(" \n         Student Details         \n");
 printf("Roll Number: %d\n",s.roll);
 printf("Name:%s\n",s.name);

 
    printf("total : %.2f marks\n",s.total);
    printf("Average : %.2f\n",s.avg);
    printf("Grade: %c \n",s.Grade);
}

int main()
{
    printf("Enter the Roll Number of the student:");
  scanf("%d",&s1.roll);

  printf("Enter the Name of the Student:");
  scanf("%s",s1.name);

  printf("Enter the Marks of the student:");
  for(int i=0;i<3;i++)
  {
    scanf("%f",&s1.marks[i]);
  }

calculate(&s1);
display(s1);

return 0;


}