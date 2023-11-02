#include<stdio.h>

int takeInput(int i);

int main(){

    int n=0;

    printf("Enter the sive of array You want to Input:  ");
    scanf("%d",&n);

    int t=0;

    printf("Enter the Target Iteger:  ");
    scanf("%d",&t);

    int i,j=0;

    int arr[n];

    for(i=0;i<n;i++){
        arr[i]=takeInput(i);
    }

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            // if(i==j){
            //     continue;
            // }
            if (arr[i]+arr[j]==t){
                printf("(%d + %d), ",arr[i],arr[j]);
            }
        }
    }
}

int takeInput(int i){
    int x=0;
    printf("Enter Element'%d':  ",i+1);
    scanf("%d",&x);

    return x;
}