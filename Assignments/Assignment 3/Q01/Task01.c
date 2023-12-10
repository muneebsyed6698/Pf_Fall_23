#include<stdio.h>

int lines_Count(FILE *file);
 int main(int argc, char *argv[]){
    printf("%s\n",argv[1]);
    FILE *file;
    file = fopen(argv[1],"r");
    if(file != NULL) printf("Done\n");
    int n = lines_Count(file);
    int arr[n][n];
    int result_arr[n/2][n/2];
    int i,j=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            arr[i][j]=0;
        }
    } 


    while(!feof(file)){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                fscanf(file," %d,\n",&arr[i][j]);
            }
        } 
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    int a,b=0;
    int max =0;

    for(i=0;i<n;i+=2){
        for(j=0;j<n;j+=2){
            max = arr[i][j];
            if(arr[i][j] > max){
                max = arr[i][j];
            }

            if(arr[i][j+1] > max){
                max = arr[i][j+1];
            }

            if(arr[i+1][j] > max){
                max = arr[i+1][j];
            }

            if(arr[i+1][j+1] > max){
                max = arr[i+1][j+1];
            }
            printf("max%d\n",max);
            result_arr[i/2][j/2]=max;
        }
        printf("\n");
    }

    for(i=0;i<n/2;i++){
        for(j=0;j<n/2;j++){
            printf("%d\t",result_arr[i][j]);
        }
        printf("\n");
    }

 }
 int lines_Count(FILE *file){
    int line=1;
    while(!feof(file)){
        if (fgetc(file)=='\n'){
            line++;
        }
    }
    rewind(file);
    return line;
 }