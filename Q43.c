#include <stdio.h>

int main(){
    int number1,number2,number3;
    printf("Enter number 1 :");
    scanf("%d",&number1);
    printf("Enter number 2 :");
    scanf("%d",&number2);
    printf("Enter number 3 :");
    scanf("%d",&number3);
    if (number1>number2 && number1>number3){
        printf("%d is greatest of all three.",number1);
    }
    else if (number2>number3 && number2>number1){
        printf("%d is greatest of all three.",number2);
    }
    else if (number3>number2 && number3>number1){
        printf("%d is greatest of all three.",number3);
    }
    else if(number1 == number2 && number2 == number3){
        printf("All the three numbers are same.");
    }
    return 0;
}