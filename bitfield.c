/*
	Program Name	:	bitfield.c
	Author  			:	Prajwal Y P
	Task		    	:	To learn conept of memory utilization using structure in C .
*/

#include<stdio.h>

struct datetime//17
{
	unsigned int dd:5;
	unsigned int mm:5;
	unsigned int yy:15;
	unsigned int ss:6;
	unsigned int mn:6;
	unsigned int hh:5;
}doj;

main()
{
	doj.dd=31;
	doj.mm=12;
	doj.yy=9999;
	doj.hh=24;
	doj.mn=60;
	doj.ss=60;
	
	
	printf("DOJ : %d/%d/%d\t%d/%d/%d",doj.dd,doj.mm,doj.yy,doj.hh,doj.mn,doj.ss);
	
	printf("\n\nSIZE : %d",sizeof(doj));
}
