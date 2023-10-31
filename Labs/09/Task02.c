/*
	Name: Syed Muneeb Ur Rehman
	Date: 31-oct
	Discription: Swaping the value of 2 variable using pointers
	
	Code was previously not running becuase pointers were not used in function.....! 
*/
#include<stdio.h>

int scanner(int a){
	int x=0;
	printf("Enter Value of Element: %d\n",a+1);
	scanf("%d",&x);
	return x;
}

void swap(int *arr,int n){
	int i,j=0;
	int temp1=0;
	for(i=0;i<n/2;i++){
		temp1 = arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp1;
	}
}

int main(){
	
	int arr[10];
	
	int i=0;
	
	for(i=0;i<10;i++){
		arr[i]=scanner(i);
	}
	
	
	for(i=0;i<10;i++){
		printf("%d, ",arr[i]);
	}
	printf("\n");
	
	swap(arr,10);
	
	for(i=0;i<10;i++){
		printf("%d, ",arr[i]);
	}
	printf("\n");
	return 0;
}
