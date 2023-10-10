/*
Name: Syed Muneeb Ur Rehman
Roll No.: 23k-0038

Discription:
            This Program will find the minimum and maximum number in an array.
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
    int max=0;
    int min=arr[0];

    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("\nMax Element is:  %d\n",max);
    printf("\nMin Element is:  %d\n",min);
}

int Scn(int n){
    int x =0;
    printf("Enter Element'%d': ",n);
    scanf("%d",&x);
    return x;
}