#include<stdio.h>
int main()
{
	int principal,rate,years;

	printf("\n  Enter the  value of pricipal is :\n");
	scanf("%d",&principal);
	
	printf("\n  Enter the  value of rate is :\n");
	scanf("%d",&rate);
	
	printf("\n  Enter the  value of years is :\n");
	scanf("%d",&years);
	
	int simpleinterest = (principal*rate*years)/100;
	
	printf("\n  The simple interest is :%d\n",simpleinterest);
	return 0;

} 
