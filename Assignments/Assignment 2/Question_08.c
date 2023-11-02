#include<stdio.h>

int digitMul(int n);

int main(){

    int n=0;

    printf("Enter an integer to find its Persistence:  ");
    scanf("%d",&n);
    int prs = 0;

    while(n/10!=0 & digitMul(n)!=0){
        printf("%d.....",n);
        n=digitMul(n);
        prs++;
    }
    printf("\npersistence=%d",prs);
}

int digitMul(int n){
    if(n==0){
        return 1;
    }
    return n%10 * digitMul(n/10);
}