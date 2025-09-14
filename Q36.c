#include <stdio.h>

int main(){
    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);
    if (marks>=75)
    {
        printf("Your grade is A.\n");
    }
    else{
        printf("Your grade is B.\n");
    }
    return 0;
}