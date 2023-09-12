#include<stdio.h>

int main(){
    int n = 0;

    printf("Enter Value of n:  ");          //Asking for Value of n
    scanf("%d",&n);

    int i = 1;              //garbage variable for counting loops

    int sum=0;              //This Variable will store my answer

    while(i<=n){            //This Loop will Ask n times values
        int j = 0;
        printf("\nEnter Value'%d':  ",i);       
        scanf("%d",&j);

        sum = sum + (j*j);      // updating final ans
        i++;
    }

    printf("\nAnswer: '%d'",sum);
}