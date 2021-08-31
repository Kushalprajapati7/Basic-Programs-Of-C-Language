#include<stdio.h>

int main()

{
	float radius,height;
	float pi= 3.14;
	
	
	printf("\n  ENTER THE VALUE OF RADIUS--->");
	scanf("%0.2f",&radius);
	
	
	printf("\n  ENTER THE VALUE OF HEIGHT--->");
	scanf("%0.2f",&height);
	
	
	printf("\n  THE VOLUME OF CYLINDER IS-->%0.2f",pi*radius*radius*height);
	

	
	return 0;
	
}
