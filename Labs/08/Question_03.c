#include<stdio.h>
#include<iostream>

int main(){
	
	char str[100];
	printf("Enter String:  ");
	scanf("%s",&str);
	int i,count =0;
	for(i=0;i<100;i++){
		if(str[i] == 'a'){
			count++;
		}
	}
	printf("%d",count);
}
