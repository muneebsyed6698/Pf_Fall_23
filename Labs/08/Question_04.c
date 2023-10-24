#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	char pass[9]={"Secure123"};
	printf("Enter Password:  ");
	fgets(str,sizeof(str),stdin);
	int i,count =-1;
	for(i=0;i<100;i++){
		count++;
		if(str[i] == '\0'){
			break;
		}
	}
	
	if(count<8){
		printf("password must be 8 characters long....\n");
	}
	else{
		if(strcmp(str,pass)){
			printf("Correct Password");
		}
	}
	
	
}
