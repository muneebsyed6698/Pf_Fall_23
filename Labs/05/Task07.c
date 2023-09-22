#include<stdio.h>
int main(){
    int i=1,j=0,T=0,act=0;
    while (i==1){
        printf("\nEnter Item cost: ");
        scanf("%d",&j);
        if (j==0){
            i=0;
        }
        else {
            if (j>1999){
                printf("Giving you 50 perc Disc on this item...");
                T = T + (j/2);
                act = act + j;
            }
            else{
                T = T + j;
                act = act + j;
            }
        }
    }
    printf("\nActual Shopping Amount is '%d'",act);
    printf("\nTotal Shopping After 50 perc Dicount on item >2000 Cost is '%d'",T);
    float fnl=0;

    if (T>=2000 && T<=4000){
        fnl = T*0.8;
        printf("\n Giving you Discount of 20 Percent");
    }

    if (T>=4001 && T<=6000){
        printf("\n Giving you Discount of 30 Percent");
        fnl = T*0.7;
    }

    if (T>6000){
        printf("\n Giving you Discount of 50 Percent");
        fnl = T*0.5;
    }
    printf("\nAmount you saved is '%.2lf'",act-fnl);
    printf("\nAmount after Discount is '%.2lf'",fnl);
}