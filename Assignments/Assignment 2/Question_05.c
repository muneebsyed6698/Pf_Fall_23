#include<stdio.h>

int cube(int n){
    return n*n*n;
}

int main(){
    int n=0;

    printf("Enter a Limit To Ramanujan Numbers");
    scanf("%d",&n);

    int a,b,c,d=0;
    int last=0;
    for(a=1;a<n;a++){
        for(b=1;b<n;b++){
            for(c=1;c<n;c++){
                for(d=1;d<n;d++){
                    if(a != b && b != c && c!= d && a != c && a != d){
                        if(cube(a) + cube(b) == cube(c) + cube(d) && cube(a) + cube(b) > last){
                            printf("'%d^3' + '%d^3' = '%d^3' + '%d^3' = %d\n",a,b,c,d,cube(a)+cube(b));
                             last = cube(a) + cube(b);
                        }
                    }
                }
            }
        }
    }
}