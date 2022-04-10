/*
	Program Name	:	unistr.c
	Author			:	Prajwal Y p
	Task			: 	To understand concept of Union
*/

#include<stdio.h>
#pragma pack(1)

struct person
{
	int id;
	char name[30];
	long long phno;
	union
	{
		float fees;
		float salary;
	}info;
}s1,e1;

main()
{
	printf("\nStudent Detail Entry :");
	printf("\n--------------------\n");
	
	printf("\nEnter Student Id\t: ");
	scanf("%d",&s1.id);
	printf("\nEnter Student name\t: ");
	fflush(stdin);
	gets(s1.name);
	printf("\nEnter Student Mobile No : ");
	scanf("%lld",&s1.phno);
	printf("\nEnter Student Fees\t: ");
	scanf("%f",&s1.info.fees);
	
	printf("\nEmployee Detail Entry :");
	printf("\n--------------------\n");
	
	printf("\nEnter Employee Id\t: ");
	scanf("%d",&e1.id);
	printf("\nEnter Employee name\t: ");
	fflush(stdin);
	gets(e1.name);
	printf("\nEnter Employee Mobile No : ");
	scanf("%lld",&e1.phno);
	printf("\nEnter Employee Salary\t: ");
	scanf("%f",&e1.info.salary);
	
	
	printf("\nStudent Details :");
	printf("\n---------------\n");
	
	printf("\nStudent Id\t\t: %d",s1.id);
	printf("\nStudent name\t\t: %s",s1.name);
	printf("\nStudent Mobile No\t: %lld",s1.phno);
	printf("\nStudent Fees\t\t: %.2f",s1.info.fees);
	
	printf("\n\nEmployee Details :");
	printf("\n----------------\n");
	
	printf("\nEmployee Id\t\t: %d",e1.id);
	printf("\nEmployee name\t\t: %s",e1.name);
	printf("\nEmployee Mobile No\t: %lld",e1.phno);
	printf("\nEmployee Fees\t\t: %.2f",e1.info.salary);
	
	printf("\n\n---------------------------------------------------------\n\n");
}
