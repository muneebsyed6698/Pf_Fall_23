#include<stdio.h>
int main()
{
	int n=0;
	printf("Enter a Number 'n' to Check If it is a Multiple of 3:  ");
	scanf("%d",&n);
	
	if(n%3==0)
	{
		printf("\n'%d' is a multiple of 3",n);
	}//end if

	else if(n%3!=0)
	{
		printf("\n'%d' is not a multiple of 3",n);
	}//end if	

}//end main