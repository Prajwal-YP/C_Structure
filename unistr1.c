/*
	Program Name		:	unistr1.c
	Author			:	Prajwal Y p
	Task			: 	To understand concept of Union-structure
*/

#include<stdio.h>
#pragma pack(1)

typedef struct 
{
	int rollno;
	char name[30];
	int m;
	union
	{
		struct
		{
			int p,ch;
		}sci;
		struct
		{
			int e,co;
		}com;
	}marks;
	int t;
	float avg;
}stu;


main()
{
	void read(stu*,int*,int);
	void disp(stu*,int[],int);
	
	int n;
	printf("\nEnter student size : ");
	scanf("%d",&n);
	stu s[n];
	int c[n];
	
	read(s,c,n);
	
	disp(s,c,n);
	
	printf("\n\n------------------------------------------------------\n\n");
}

void read(stu *s,int *c,int n)
{
	int i;
	printf("\nSTUDENT DETAILS ENTRY :");
	printf("\n---------------------\n");
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter Student roll no\t: ");
		scanf("%d",&(s+i)->rollno);
		printf("Enter Student Name\t: ");
		fflush(stdin);
		gets((s+i)->name);
		printf("\nCaterory list\n\t1.Science\n\t2.Commerce\nEnter choice : ");
		scanf("%d",(c+i));
		while(*(c+i)<1 || *(c+i)>2)
		{
			printf("\aEnter Valid choice : ");
			scanf("%d",(c+i));
		}
		printf("\nEnter maths marks\t: ");
		scanf("%d",&(s+i)->m);
		if(*(c+i)==1)
		{
			printf("Enter physics marks\t: ");
			scanf("%d",&(s+i)->marks.sci.p);
			printf("Enter chemistry marks\t: ");
			scanf("%d",&(s+i)->marks.sci.ch);
			(s+i)->t=(s+i)->m+(s+i)->marks.sci.p+(s+i)->marks.sci.ch;
		}
		else
		{
			printf("Enter economics marks\t: ");
			scanf("%d",&(s+i)->marks.com.e);
			printf("Enter commerce marks\t: ");
			scanf("%d",&(s+i)->marks.com.co);
			(s+i)->t=(s+i)->m+(s+i)->marks.com.e+(s+i)->marks.com.co;
		}
		(s+i)->avg=(s+i)->t/3.0;
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");	
	}
}

void disp(stu *s,int c[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("\n\nStudent-%d Details",i+1);
		printf("\n------------------\n");
		
		printf("\nStudent roll no\t\t: %d",(s+i)->rollno);
		printf("\nEnter Student Name\t: %s",(s+i)->name);
		printf("\nStudent maths marks\t: %d",(s+i)->m);
		if(c[i]== 1)
		{
			printf("\nStudent physics marks\t: %d",(s+i)->marks.sci.p);
			printf("\nStudent chemistry marks\t: %d",(s+i)->marks.sci.ch);
		}
		else
		{
			printf("\nStudent economics marks\t: %d",(s+i)->marks.com.e);
			printf("\nStudent commerce marks\t: %d",(s+i)->marks.com.co);
		}
		printf("\nTotal\t\t\t: %d",(s+i)->t);
		printf("\nAverage\t\t\t: %.2f",(s+i)->avg);
	}
	
}
