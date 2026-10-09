#include<stdio.h>
int main()
{
	int perc;
	scanf("%d" , &perc);
	printf(" enter the number ");
	
	if(perc<=100 && perc>=80){
	printf(" grade A");
	}
	else if (perc<80 && perc>=60){
	printf(" grade B");
	}
	else if(perc<60 && perc>=40){
	printf(" grade C");
	}
	else if (perc<40 && perc>30){
	printf("grade D");
	}
	else
{
	printf(" grade F");
	}
	return 0;
	
	}
