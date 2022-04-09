/*
	Program Name	:	structbook.c
	Author			:	Prajwal Y P
	Task			:	To diaplay book details using structure function .
*/

#include<stdio.h>

struct book					//STRUCTURE DECLARATION
{
	int id;
	char title[30];
	char author[30];
	float price;
}b1,b2;						//STRUCTURE VARIABLE INITIALIZATION
typedef struct book book;	//STRUCTURE NAME ALIASING

int main()
{	
	
	book input();			//READING STRUCTURE VARIABLES
 	void output(book);		//DISPLAYING STRUCTURE VARIABLES
	
	printf("\nREADING BOOK INFORMATION :");
	printf("\n------------------------");
	b1=input();				//READING BOOK DETAILS
	b2=input();
	book b3=input();
	
	printf("\n\nBOOK INFORMATION");
	printf("\n----------------");
	output(b1);				//DISPLAYING BOOK DETAILS
	output(b2);
	output(b3);
	
	printf("\n\n--------------------------------------------------------\n\n");
	return 0;
}

book input()
{
	book b;
	
	printf("\n\nEnter Book_id        :	");
	scanf("%d",&b.id);
	printf("\nEnter Book_name      :	");
	fflush(stdin);
	gets(b.title);
	printf("\nEnter Book_author    :	");
	fflush(stdin);
	gets(b.author);
	printf("\nEnter Book_price     :	");
	scanf("%f",&b.price);
	
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	return b;
}

void output(book b)
{
	printf("\n\nBook_id         :	%d",b.id);
	printf("\nBook_Name       :	%s",b.title);
	printf("\nBook_Author     :	%s",b.author);
	printf("\nBook_Price      :	%f",b.price);
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
