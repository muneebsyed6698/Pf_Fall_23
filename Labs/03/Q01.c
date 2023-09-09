#include <stdio.h>

int main() {
    int v1, v2;
    char opp;
    
    printf("Enter Value 1: ");
    scanf("%d", &v1);
    
    printf("Enter Value 2: ");
    scanf("%d", &v2);
    
    printf("Enter Operation: ");
    scanf(" %c", &opp);
    
    if (opp == '+'){
        printf("%d",v1 + v2);
    }

    if (opp == '-'){
        printf("%d",v1 - v2);
    }

    if (opp == '*'){
        printf("%d",v1 * v2);
    }

    if (opp == '/'){
        printf("%.2lf",v1 /(float) v2);
    }
    
    return 0;
}