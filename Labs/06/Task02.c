/*
Name: Syed Muneeb Ur Rehman
Roll No.: 23k-0038

Discription:
            program that will generate the Fibonacci series up to 10000. Also find the sum of the
			generated Fibonacci numbers divisible by 3, 5 or 7 only.
*/
#include<stdio.h>

int main(){
	int i,j=1;
	int k=0;
	int sum =0;
	printf("%d,%d,",i,j);

	for(k=i+j;k<10000;){
		k=i+j;
		printf("%d,",k);
//		if (k>10000){
//			break;
//		}
		i=j;
		j=k;
		
		if(k%3==0 || k%5==0 || k%7==0){
			sum+=k;
		}
		
	}
	printf("\nSum is: %d",sum);

	
}
