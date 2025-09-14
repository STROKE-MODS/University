#include <stdio.h>

int main (){
    int variable1, variable2, temp;
    printf("Enter the first number : ");
    scanf("%d",&variable1);
    printf("Enter the second number :  ");
    scanf("%d",&variable2);

    temp = variable1;
    variable1 = variable2;
    variable1 = temp;
    printf("The First number is : %d\nThe second number is : %d",variable1,variable2);
    return 0;
 }
