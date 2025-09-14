#include <stdio.h>
#include <math.h>

int main(){
    int number,choice;
    printf("Enter the number : ");
    scanf("%d",&number);
    printf("What operation you want to perform ?\n");
    printf("1.Square\n2.Cube\n3.Square root\nYour choice : ");
    scanf("%d",&choice);
    if (choice == 1){
        int power = pow(number,2);
        printf("The Square of %d is : %d\n",number,power);
    }
    else if (choice == 2)
    {
        int cube = pow(number,3);
        printf("The cube of %d is : %d\n",number,cube);
    }
    else if (choice == 3)
    {
        float root;
        root = pow(number,0.5);
        printf("The square rooot of %d is : %.1f\n",number,root);
    }
    else{
        printf("Invalid choice.\n");
    }
    return 0;
}