#include<stdio.h>
 
int main()
{
	int a,b,c,d;
	
	printf("\n  Enter The Value Of Number a:-");
    scanf("%d",&a);
   	printf("\n  Enter The Value Of Number b:-");
    scanf("%d",&b);
   	printf("\n  Enter The Value Of Number c:-");
    scanf("%d",&c);
   	printf("\n  Enter The Value Of Number d:-");
    scanf("%d",&d);
    
    if(a>b)
    {
       if(a>c)
         {
         	if(a>d)
         	{
         		printf(" a Number Maximum");
			 }
			 else
			 {
			 	printf(" d Number Maximum");
			 }
			 
		 }
		 else
		 {
		 	if(c>d)
		 	{
		 		printf(" c Number Maximum");
			 }
			 else
			 {
			 	printf(" d Number Maximum");
			 }
		 	
		 }
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf(" b Number Maximum");
			}
			else
			{
				printf(" d Number Maximum");
			}
		}
		else
		    if(c>d)
		    {
		    	printf(" c Number Maximum");
			}
			else
			{
				printf(" d Number Maximum");
	}
	return 0;

}
}
