#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	printf("enter the number");
	if(a<b && a<c){
	printf(" a is the smallest number");
	}
	else if(b<a && b<c){
	printf(" b is smallest number");
	}
	else{
	printf(" the smallest number is c");
	}
	return 0;
	}
	
