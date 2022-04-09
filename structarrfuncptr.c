/*
	Program Name	:	structarrfuncptr.c
	Author			  :	Prajwal Y P
	Task			    :	Understanding the array of structure function POINTER through employee details .
*/

#include<stdio.h>
int i,size;
struct employee 
{
	int id;			//4
	char name[30];	//30
	float salary;	//4
	//BUT STRUCT IS ADDING 2 MORE BYTES EXTRA
	//TOTAL STRUCTURE SIZE : 40 BYTES
};
typedef struct employee emp;

int main()
{
	
	printf("Enter Employee size : ");
	scanf("%d",&size);

while(!(size>=0))
{
	printf("Enter Employee size(+ve number) : ");
	scanf("%d",&size);
}
	
	emp e[size];
	void read(emp*);
	void disp(emp*);
	void clrscr(void);
	
	clrscr();
	printf("STRUCTURE HAS FOLLOWING\n\tONE INT VARIABLE OF SIZE (4 BYTES)\n\tONE CHARACTER ARRAY OF SIZE (30 BYTES)\n\tONE FLOAT VARIABLE OF SIZE (4 BYTES)");
	printf("\n\tSTRUCTURE DATA-TYPE IS ADDING EXTRA SIZE OF (2 BYTES)");
	printf("\n\nSIZE OF STRUCTURE  :  %d",sizeof(*e));
	printf("\n\n\nPress any key to read EMPLOYEE DETAILS . . . ");
	getch();
	clrscr();
	
	read(e);
	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	disp(e);
	
	printf("\n\n--------------------------------------------------------\n\n");
	return 0;
}

void read(emp *e)
{
	for(i=0;i<size;i++)
	{
		printf("\n\nTHIS DETAILS IS STORED IN ADDRESS = %u",(e+i));
		printf("\nEnter Employee-%d Details : ",i+1);
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("\nEnter Employee_Id     : ");
		scanf("%d",&(e+i)->id);
		printf("\nEnter Employee_name   : ");
		fflush(stdin);
		gets((e+i)->name);
		printf("\nEnter Employee_Salary : ");
		scanf("%f",&(e+i)->salary);	
	}
}

void disp(emp *e)
{
	for(i=0;i<size;i++)
	{
		printf("\n\nEmployee-%d Details : ",i+1);
		printf("\n~~~~~~~~~~~~~~~~~~~\n");
		printf("\nEmployee_Id      : %d",(e+i)->id);
		printf("\nEmployee_name    : %s",(e+i)->name);
		printf("\nEmployee_salaray : %.2f",(e+i)->salary);
	}
	
}

void clrscr(void)
{
	system("cls");
}
