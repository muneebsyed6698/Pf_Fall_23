#include<stdio.h>
int main(){
    int n=0;
    printf("Enter 8-bit binary number : ");
    scanf("%d",&n);
    printf("your 8-bit binary is:  %d\n",n);
    int trl = 0;            //this is bits after 7th or 8th bit 


        /*To Calculate new Value of 'n' First find the 8th and 7th bits ( 2 left-most bits)
        there value colud be either 01 orr 11 then subtract 1 from them. Turning
        off the 7th bit. if i directly add the trailing bits to new n then it would give ans 
        in decimal number system to get answer in binary we have to add trailing zeros as many
        bits we want to add.To do so multily it by 10^(number of trailing bits) then add 
        trailing bits  */
    if((n/1000000) % 10 == 1 ){
        trl = n % 1000000;
        n = ((n/1000000)-1)*1000000 +trl;        
    }
    if((n/1000) % 10 == 1 ){
        trl = n % 1000;
        n = ((n/1000)-1)*1000 +trl;
    }
    printf("%d",n);
}