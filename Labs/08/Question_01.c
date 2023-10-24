#include<stdio.h>

int Swap(int a, int b);

int main(){
	
	int a = 4;
	int b = 8;
	printf("\nBefore Swap\na=%d\nb=%d",a,b);
	Swap(a,b);
}

int Swap(int a, int b){
	int temp=0;
	
	temp=a;
	
	a=b;
	
	b=temp;
	
	printf("\nAfter Swap\na=%d\nb=%d",a,b);
}
