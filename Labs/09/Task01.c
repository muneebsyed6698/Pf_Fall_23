/*
	Name: Syed Muneeb Ur Rehman
	Date: 31-oct
	Discription: Swaping the value of 2 variable using pointers
	
	Code was previously not running becuase pointers were not used in function.....! 
*/
#include<stdio.h>

void swap(int *a,int *b){
	int temp =*a;
	*a=*b;
	*b=temp;
}

int main(){
	int j=2;
	int k=5;
	printf("j=%d ,k=%d\n",j,k);
	swap(&j,&k);
	printf("j=%d ,k=%d\n",j,k);
	return 0;
}
