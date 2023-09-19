#include<stdio.h>
int main()
{

	char ans;
	printf("Are you sure to delete [Y/y] / [N/n] ?  ");
	scanf("%c",&ans);
	

	switch(ans){
		case 'n':
		printf("\nDeletation Cancelled...!");
		break;

		case 'N':
		printf("\nDeletation Cancelled...!");
		break;

		case 'Y':
		printf("\nDeleted Successfully...!");
		break;

		case 'y':
		printf("\nDeleted Successfully...!");
		break;

	}

}//end main