#include<stdio.h>
int main(){
    int n=0;
    printf("Enter Any Character : ");
    scanf("%c",&n);
    printf("The ASCII Value is:  %d\n",n);

    if(n>=65 && n<=90){
        printf("You Entered an uppercase letter..");
    }
    if(n>=97 && n<=122){
        printf("You Entered a lowercase letter..");
    }
    if((n>=32 && n<=47) || (n>=58 && n<=64) || (n>=91 && n<=96) || (n>=123 && n<=126)){
        printf("You Entered a special character..");
    }
    if(n>=48 && n<=57){
        printf("You Entered a digit..");
    }
}