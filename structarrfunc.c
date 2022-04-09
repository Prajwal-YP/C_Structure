/*
	Program Name	:	structarrfunc.c
	Author			:	Prajwal Y P
	Task			:	Understanding the array of structure function through employee details .
*/

#include<stdio.h>
int i,size;
struct employee 
{
	int id;
	char name[30];
	float salary;
};
typedef struct employee emp;

int main()
{
	
	printf("Enter Employee size : ");
	scanf("%d",&size);
	
	emp e[size];
	emp read(void);
	void disp(emp[]);
	
	void *p=e;
	for(i=0;i<size;i++)
	{
		printf("\n\nEnter Employee-%d Details : ",i+1);
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		e[i]=read();
	}
	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	
	disp(e);
	
	
	
	printf("\n\n--------------------------------------------------------\n\n");
	return 0;
}

emp read(void)
{
	emp e;
	printf("\nEnter Employee_Id     : ");
	scanf("%d",&e.id);
	printf("\nEnter Employee_name   : ");
	fflush(stdin);
	gets(e.name);
	printf("\nEnter Employee_Salary : ");
	scanf("%f",&e.salary);
	
	return e;
}

void disp(emp e[])
{
	for(i=0;i<size;i++)
	{
		printf("\n\nEmployee-%d Details : ",i+1);
		printf("\n~~~~~~~~~~~~~~~~~~~\n");
		printf("\nEmployee_Id      : %d",e[i].id);
		printf("\nEmployee_name    : %s",e[i].name);
		printf("\nEmployee_salaray : %.2f",e[i].salary);
	}
	
}
