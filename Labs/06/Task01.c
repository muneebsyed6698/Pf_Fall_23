/*
Name: Syed Muneeb Ur Rehman
Roll No.: 23k-0038

Discription:
            This Program checks if the number is a Perfect number
*/
#include<stdio.h>

int main(){
	int n= 0;
	printf("Enter a Number 'n': ");
	scanf("%d",&n);
	
	printf("Now Finding it's Factor");
	
	int i=0;
	int sum = 0;

	for(i=1;i<n;i++){
		if(n%i==0){
			printf(" %d,",i);
			sum += i;
		}
	}
	printf(" %d\n",n);
	if(sum==n){
	printf("\nThis is a Perfect Number");
	}
}