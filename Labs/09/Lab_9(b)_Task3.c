#include<stdio.h>

int GCD(int a, int b);

int main(){
	int a=0;	
	printf("Enter Val 1 :  ");
	scanf("%d",&a);
	
	
	int b=0;
	printf("Enter Val 2 :  ");
	scanf("%d",&b);
	
	printf("%d",GCD(a,b));
	
	
	
}

int GCD(int a, int b){
	if(b==0){
		return a;
	}
	
	return GCD(b,a%b);
}

