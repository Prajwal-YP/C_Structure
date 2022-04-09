/*
	Program Name	:	structmobbisearch.c
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
	int n,i,j=1,k,f=-1;
	
	printf("\nEnter total mobiles available : ");
	scanf("%d",&n);
	int l=0,u=n-1,mid=(u+l)/2;
	mob m[n];
	printf("\nReading Mobile Details : ");
	printf("\n----------------------\n\n");
	
	for(i=0;i<n;i++)
	{
		m[i].sno=j++;
		printf("\n\nEnter mobile-%d Name          : ",i+1);
		fflush(stdin);
		gets(m[i].model);
		printf("\nEnter mobile-%d category      : ",i+1);
		fflush(stdin);
		gets(m[i].cat);
		printf("\n---------------------------------------------\n");
	}
	
	printf("\n\n");
	
	
	printf("\nSearching Process : (Using Binary Search)");
	printf("\n-----------------");
	printf("\n\nEnter serial number of mobile to search for its details : ");
	scanf("%d",&k);
	
	while(l<=u)
	{
		if(m[mid].sno==k)
		{
			f=mid;
			break;
		}
		else if(k>m[mid].sno)
			l=mid+1;
		else
			u=mid-1;
		mid=(l+u)/2;
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
