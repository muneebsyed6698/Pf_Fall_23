/*
Name: Syed Muneeb Ur Rehman
Roll No.: 23k-0038

Discription:
            This Program will compute the LCM and GCD of two numbers.
*/
#include<stdio.h>

int main(){
	int n,m=0;
	printf("Enter Number 1: ");
	scanf("%d",&n);	
	
	printf("Enter Number 2: ");
	scanf("%d",&m);	
	int gcd =0;
	if(m>n){
		gcd=m;
	}
	else{
		gcd=n;
	}
	for(;gcd>0;gcd--){
		if(m%gcd==0 && n%gcd==0){
			break;
		}
	}
	printf("GCD is: %d\n",gcd);
	int lcm=m*n/gcd;
	printf("LCM is: %d",lcm);
	
	
}
