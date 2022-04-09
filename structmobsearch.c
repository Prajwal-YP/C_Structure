/*
	Program Name	:	structmobsearch.c
	Author			:	Prajwal Y P
	Task			:	To search student using roll number in structure .
*/

#include<stdio.h>

typedef struct mobile
{
	int sno;
	char model[30];
	char cat[30];
}mob;

int main()
{
	int n,i,k,f=-1;
	printf("\nEnter total mobiles available : ");
	scanf("%d",&n);
	
	mob m[n];
	printf("\nReading Mobile Details : ");
	printf("\n----------------------\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("\n\nEnter mobile-%d Serial Number : ",i+1);
		scanf("%d",&m[i].sno);
		printf("\nEnter mobile-%d Name          : ",i+1);
		fflush(stdin);
		gets(m[i].model);
		printf("\nEnter mobile-%d category      : ",i+1);
		fflush(stdin);
		gets(m[i].cat);
	}
	
	printf("\n\n");
	
	
	printf("\nSearching Process : ");
	printf("\n-----------------");
	printf("\n\nEnter serial number of mobile to search for its details : ");
	scanf("%d",&k);
	
	for(i=0;i<n;i++)
	{
		if(m[i].sno == k)
			f=i;
	}
	
	if(f==-1)
	{
		printf("\nSearch Not Found !!");
	}
	else
	{
		printf("\n\nSearch Found !!");
		printf("\n\tMobile Serial Number : %d",m[f].sno);
		printf("\n\tMobile Model name    : %s",m[f].model);
		printf("\n\tMobile category      : %s",m[f].cat);
	}
	
	printf("\n\n-------------------------------------------------------\n\n");
	return 0;
}
