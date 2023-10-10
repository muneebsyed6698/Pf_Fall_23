
/*
Name: Syed Muneeb Ur Rehman
Roll No.: 23k-0038

Discription:
            This Program will read n number of values in an array and display it in reverse
            order.
*/
#include<stdio.h>
int Scn(int n);
int main(){

    printf("Enter The size of array you want to Input: ");
    int n =0;
    scanf("%d",&n);

    int arr[n];

    int i=0;
    for(i=0;i<n;i++){
        arr[i]=Scn(i+1);   
    }

    printf("Your Array:\n");
    for(i=0;i<n;i++){
        printf("%d, ",arr[i]);
    }

    printf("\nRevers of Array:\n");
    for(i=n-1;i>=0;i--){
        printf("%d, ",arr[i]); 
    }
}

int Scn(int n){
    int x =0;
    printf("Enter Element'%d': ",n);
    scanf("%d",&x);
    return x;
}