#include<stdio.h>

int Calculator(int a,int b,char opp);

int main(){
	
	int a=0;
	printf("Enter Num 01:   ");
	scanf("%d",&a);
	
	
	int b=0;
	printf("Enter Num 02:   ");
	scanf("%d",&b);
	
	
	char opp;
	printf("Enter Operator:   ");
	scanf(" %c",&opp);
	
	
	
	printf("%d",Calculator(a,b,opp));	
}

int Calculator(int a,int b,char opp){
	switch(opp){
		case '+':
			return a+b;
			break;
		case '-':
			return a-b;
			break;
		case '*':
			return a*b;
			break;
		case '/':
			return a/b;
			break;
	}		
		
}
