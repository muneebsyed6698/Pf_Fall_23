/*
Name: Syed Muneeb Ur Rehman
Roll No.: 23k-0038

Discription:
			This Program will take  Two integers a and b taken as input from the user. Using Loops iterate the value of
			a till the value of b.
			If the value of a<=9 the output should correspond to the English representation of the
			numbers i.e., 8=Eight, 9=Nine etc.
			If the iteration exceeds 9 then the programs should print if the exceeded number is even or
			odd.
*/
#include<stdio.h>

int main(){
	int a,b=0;
	printf("Enter Number 1: ");
	scanf("%d",&a);	
	
	printf("Enter Number 2: ");
	scanf("%d",&b);
	for(;a<=b;a++){
		switch(a){
			case 1:
				printf("one,");
				break;
			case 2:
				printf("two,");
				break;
			case 3:
				printf("three,");
				break;
			case 4:
				printf("four,");
				break;
			case 5:
				printf("five,");
				break;
			case 6:
				printf("six,");
				break;
			case 7:
				printf("seven,");
				break;
			case 8:
				printf("eight,");
				break;
			case 9:
				printf("nine,");
				break;
		}
		if(a>9){
			if(a%2==0){
				printf("even,");
			}
			else{
				printf("odd,");
			}
		}
		
	}
}
