#include<stdio.h>

int main()

{
  int rating;
  
  printf("\n  ENTER YOUT R RATING BETWEEN 1 TO 5-->");
  scanf("%d",&rating);			
  														
  switch(rating)
  {
  	case 1:
  		printf("\n  YOUR RATING IS 1\n");											
  		break;									
  		
  	case 2:
  		printf("\n  YOUR RATING IS 2\n");
  		break;
  		
	case 3:
	    printf("\n  YOUR RATING IS 3\n");
		break;
  		
	case 4:
  		printf("\n  YOUR RATING IS 4\n");
        break;	
  		
     case 5:
  		printf("\n  YOUR RATING IS 5\n");
    	 break;					
  		
  	default :												
  		printf("\n  YOUR RATING IS INAVLID\n");
  }			
	return 0;
}

