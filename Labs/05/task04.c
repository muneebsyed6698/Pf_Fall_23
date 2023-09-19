#include<stdio.h>
int main()
{
	int v1=0;
	printf("Enter Value 1: ");
	scanf("%d",&v1);
	
	int v2=0;
	printf("Enter Value 2: ");
	scanf("%d",&v2);
	
	char opp;
	printf("Enter Opperator:  ");
	scanf(" %c",&opp);
	

	switch(opp){
		case '+':
		printf("'%d' %c '%d' is %d",v1,opp,v2,v1+v2);


		case '-':
		printf("'%d' %c '%d' is %d",v1,opp,v2,v1-v2);


		case '*':
		printf("'%d' %c '%d' is %d",v1,opp,v2,v1*v2);


		case '/':
		printf("'%d' %c '%d' is %.2lf",v1,opp,v2,v1/(float)v2);


	}

}//end main