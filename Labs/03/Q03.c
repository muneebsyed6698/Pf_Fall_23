#include<stdio.h>
#include<math.h>

int main(){
	int p = 0, b = 0 ;
	printf("====Hypotnuse Finding Program====\n");
	printf("Perpendecular:__");
	scanf("%d",&p);
	printf("Base:__");
	scanf("%d",&b);

	float hyp = sqrt((p*p)+(b*b));

	printf("Hypotnuse is:__%f",hyp);
	return 0;
		
}//end main
