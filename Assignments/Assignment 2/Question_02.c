#include<stdio.h>

int Scanner(int i,int j);
int nextEmptyValue(int arrStorage[][3],int n);
int findHeighest(int arrStorage[][3],int n);

int main(){
    int n =0;

    printf("Enter N*N Sqr Matrix Size:  ");
    scanf("%d",&n);
    
    int arr[n][n];          //Array of Binary Digits

    int arrStorage[n*n][3]; //Array That stores Result


    int i,j=0;

    //Settinig all The Elements of Storage Array To Zero
    for(i=0;i<n*n;i++){
        for(j=0;j<3;j++){
            arrStorage[i][j]=0;
        }
    }


    for(i=0;i<n*n;i++){
        for(j=0;j<3;j++){
            if(arrStorage[i][0]!=0){
                printf("Size: %d |  (%d,%d)\n",arrStorage[i][0],arrStorage[i][1],arrStorage[i][2]);
            }
        }
    }

    //Scanning all the elements of Binary Array
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            arr[i][j]=Scanner(i,j);
        }
    }


    //Printing Binary Array
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    int x,y=0;
    int size=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]==1){
                x=i;
                y=j;
                size=0;
                while(arr[x][y]==1){
                    int m,n=0;
                    for(m=x;m>=i;m--){
                        for(n=y;n>=j;n--){
                            if(arr[m][n]!=1){
                                goto outOfHere;
                            }
                        }
                    }
                    size++;
                    x++;
                    y++;
                }
                outOfHere:
                printf("_____________________");

                //Adding Result to Storage Array

                int p=nextEmptyValue(arrStorage,n*n);

                arrStorage[p][0]=size;
                arrStorage[p][1]=i;
                arrStorage[p][2]=j;
            }
        }
    }
    printf("\n");

    //print Storage Array
    // for(i=0;i<n*n;i++){
    //     if(arrStorage[i][0]==0){
    //             break;
    //         }
    //     printf("%d,%d,%d\n",arrStorage[i][0],arrStorage[i][1],arrStorage[i][2]);
    // }

    int Max=arrStorage[findHeighest(arrStorage,n*n)][0];


    printf("\nThe Largest Sqr Matrix ofs 1's: \n");
    for(i=0;i<n*n;i++){
        if(arrStorage[i][0]==0){
                break;
            }
        if(arrStorage[i][0]==Max){
            printf("\nSize: %d |Row & Column(%d,%d)\n",arrStorage[i][0],arrStorage[i][1],arrStorage[i][2]);
        }
        // printf("%d,%d,%d\n",arrStorage[i][0],arrStorage[i][1],arrStorage[i][2]);
    }

}


//Function to Scan All Elemnts Of Array
int Scanner(int i,int j){
    int x=0;
    printf("Enter Element [%d][%d]",i+1,j+1);
    scanf("%d",&x);

    return x;
}

int nextEmptyValue(int arrStorage[][3], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        if (arrStorage[i][0] == 0 && arrStorage[i][1] == 0 && arrStorage[i][2] == 0) {
            return i; // Return the index of the first empty slot
        }
    }
    return 0; // Return -1 if no empty slot is found
}


int findHeighest(int arrStorage[][3],int n){
    int i, j;
    int Max = arrStorage[0][0];
    int loc=0;
    for (i = 0; i < n; i++) {
        if (arrStorage[i][0] != 0 && arrStorage[i][0] > Max) {
            Max = arrStorage[i][0];
            loc=i;
        }
    }
    // printf("\nMax:%d\n",Max);
    return loc; 
}