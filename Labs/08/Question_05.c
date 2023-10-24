#include<stdio.h>

int decideCarUsage(int num, int day);

int main(){
	int num;
	printf("Enter Numeric part of your car's number plate:   ");
	scanf("%d",&num);
	
	int day;
	printf("Enter day(1-7):   ");
	scanf("%d",&day);	
	if(decideCarUsage(num,day)){
		printf("You can use your car Today.....");
	}
	else{
		printf("You can not use your car Today.....");
	}
	
}

int decideCarUsage(int num, int day){
	if(num%2==day%2){
		return 1;
	}
	else{
		return 0;
	}
}
