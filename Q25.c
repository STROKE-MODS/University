#include <stdio.h>

int main(){
    int root;
    printf("Enter the value of discriminant :");
    scanf("%d",&root);
    if (root>0){
        printf("The equation have real and unequal roots.\n");
    }
    else if (root == 0)
    {
        printf("The equation have real and equal roots.\n");
    }
    else{
        printf("The equation have imaginary roots.\n");
    }
    
    return 0;
}