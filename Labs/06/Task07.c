/*
Name: Syed Muneeb Ur Rehman
Roll No.: 23k-0038

Discription:
            this program will takes a user input array and prints the sum of its elements.
*/

#include<stdio.h>
int Scn(int n);
int main(){

    printf("Enter The size of array you want to Input: ");
    int n =0;
    scanf("%d",&n);

    int arr[n];

    int i=0;
    int sum=0;
    for(i=0;i<n;i++){
        arr[i]=Scn(i+1);
        sum+=arr[i];
    }
    printf("Your Array:\n");
    for(i=0;i<n;i++){
        printf("%d, ",arr[i]);
    }
    printf("\nSum of all elements is:  %d\n",sum);

}

int Scn(int n){
    int x =0;
    printf("Enter Element'%d': ",n);
    scanf("%d",&x);
    return x;
}