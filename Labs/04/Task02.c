#include<stdio.h>

int main(){
    int n = 0;

    printf("Enter Value of n:  ");          //Asking for Value of n
    scanf("%d",&n);

    int i = 0;              //garbage variable for counting loops
    
    
    
    while(i<=n){            //This Loop will run line-wise
        
        int j = 0;          //garbage variable

        while(j<=n){            //This loop will print stars in staright line
            printf("* ");
            j++;
        }


        printf("\n");       //moving to next line
        i++;
    }


}