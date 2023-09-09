#include<stdio.h>
#include<math.h>

int main(){
	int sale = 0, org = 0 ;
	printf("====Finding Sale Price====\n");
	printf("Percentage Off:__");
	scanf("%d",&sale);
	printf("Orignal Price:__");
	scanf("%d",&org);

	float sale_price = org * ((100-sale)/(float)100);

	printf("Sale Price is :__%f",sale_price);
	return 0;
		
}//end main
