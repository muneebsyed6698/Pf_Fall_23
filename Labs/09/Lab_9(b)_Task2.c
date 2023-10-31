#include<stdio.h>
int Mul(int a, int b);
int main(){
	int a=0;	
	printf("Enter Val 1 :  ");
	scanf("%d",&a);
	
	
	int b=0;
	printf("Enter Val 2 :  ");
	scanf("%d",&b);
	
	printf("%d",Mul(a,b));
	
	
	
}

int Mul(int a, int b){
	if(b==0){
		return 0;
	}
	
	return a + Mul(a,b-1);
}
