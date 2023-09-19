#include<stdio.h>
int main()
{
	int n=0;
	printf("Enter time in 24 hr Format:   ");
	scanf("%d",&n);
	
	if(n>=5 && n <= 11)
	{
		printf("\nGood Morning...!");
	}//end if

	else if(n>=12 && n < 18)
	{
		printf("\nGood Evening...!");
	}//end if

	else if(n>=18 && n <= 24)
	{
		printf("\nGood Night...!");
	}//end if	

}//end main