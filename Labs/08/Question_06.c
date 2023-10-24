#include<stdio.h>

void processArray(int arr[],int n);
int main(){
	int arr[6]={1,2,3,4,5,6};
	processArray(arr,6);
}

void processArray(int arr[],int n){
	int i =0;
	int sum=0;
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	printf("sum is:  %d\n",sum);
	int max=0;
	
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("Max is:  %d\n",max);
	
	int min=max;
	
	for(i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("Min is:  %d\n",min);
}
