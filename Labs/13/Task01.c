#include<stdio.h>
#include<string.h>

int main(){
	FILE *fptr;
	
	fptr = fopen("Task01.csv","r");
	int Row = -1;
	int Column =1;
	char chk;
	//count Rows
	while(!feof(fptr)){
		fscanf(fptr,"%c",&chk);
		if (Row == 0 && chk == ','){
			Column++;
		}
		if (chk == '\n') Row++;
	} 
	printf("Rows = %d Column =%d\n",Row, Column);
	

	int i=0;
	int j=0;
	
	rewind(fptr);
	
	while(!feof(fptr)){
		
		fscanf(fptr,"%c",&chk);
		
		if(chk == ','){
			printf("\t|");
		}
		else if(chk == '\n'){
			printf("\n");
			j++;
			if(j==1) printf("\n\n");
		}
		else{
			printf("%c",chk);
		}
		
		}
	}
	

