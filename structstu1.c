/*
	Program Name	:	structstu1.c
	Author			:	Prajwal Y P
	Task			:	To deal with many student details using structure arrays .
*/

#include<stdio.h>

struct student 
{
	int rollno;
	char name[30];
	float avg;
};
typedef struct student student;

int main()
{
	int i,n;
	printf("\nEnter total number of students : ");
	scanf("%d",&n);
	
while(!(n>=1 && n<=100))
{
	printf("\nEnter total number of students (1-100) : ");
	scanf("%d",&n);
}

	student s[n];
	student read();
	
	printf("\n-----------------------");
	printf("\nSTUDENT DETAILS READING :");
	printf("\n-----------------------\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter student-%d details : ",i+1);
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~\n");
		s[i]=read();
	}
	
	printf("\n---------------");
	printf("\nSTUDENT DETAILS :");
	printf("\n---------------\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("\nStudent-%d details : ",i+1);
		printf("\n~~~~~~~~~~~~~~~~~~\n");
		disp(s[i]);
	}
	
	printf("\n\n--------------------------------------------------------\n\n");
	return 0;
}

student read()
{
	student s;
	printf("\nEnter student Roll_No        : ");
	scanf("%d",&s.rollno);
	printf("\nEnter student name           : ");
	fflush(stdin);
	gets(s.name);
	printf("\nEnter student Average_Marks  : ");
	scanf("%f",&s.avg);
	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
	
	return s;
}

disp(student s)
{
	printf("\nStudent Roll_No       : %d",s.rollno);
	printf("\nStudent Name          : %s",s.name);
	printf("\nStudent Average_Marks : %f",s.avg);

}
