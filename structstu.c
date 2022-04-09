/*
	Program Name	:	structstu.c
	Author			  :	Prajwal Y P
	Task			    :	To read student details using structure .
*/

#include<stdio.h>

int main()
{
	struct student			//Local Stucture 
	{
		int rollno;
		char name[30];
	 	int avg;
	}s3;					//declaring structure variable at structure definition
	
	struct student s1={1,"Prajwal Y P",98},s2={2,"Rahul R",97};	//declaring structure variable after structure definition
	
	printf("\nEnter Roll No : ");
	scanf("%d",&s3.rollno);
	
	printf("\nEnter Name : ");
	fflush(stdin);
	gets(s3.name);
	
	printf("\nEnter Average marks : ");
	scanf("%d",&s3.avg);
	
	printf("\n\nSTUDENT DETAILS ARE : ");
	printf("\n-------------------");
	
	printf("\n\nRoll No : %d",s1.rollno);		//STUDENT-1 DETAILS
	printf("\nName    : %s",s1.name);
	printf("\nAverage : %d",s1.avg);
	
	printf("\n\nRoll No : %d",s2.rollno);		//STUDENT-2 DETAILS
	printf("\nName    : %s",s2.name);
	printf("\nAverage : %d",s2.avg);
	
	printf("\n\nRoll No : %d",s3.rollno);		//STUDENT-3 DETAILS
	printf("\nName    : %s",s3.name);
	printf("\nAverage : %d",s3.avg);
	
	printf("\n\n--------------------------------------------------------\n\n");
	return 0;
}
