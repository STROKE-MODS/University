#include <stdio.h>
#include <math.h>
int main(){
    int length_side1,length_side2,length_side3;
    printf("Enter the length of side 1 : ");
    scanf("%d",&length_side1);
    printf("Enter the length of side 2 : ");
    scanf("%d",&length_side2);
    printf("Enter the length of side 3 : ");
    scanf("%d",&length_side3);

    if (length_side1==length_side2 && length_side2==length_side3){
        printf("It is an equilateral triangle.\n");
    }
    else if (length_side1==length_side2 || length_side2==length_side3 || length_side2==length_side3)
    {
        printf("It is an isoscelous triangle.");
    }
    else if((pow(length_side1,2)+pow(length_side2,2)) == pow(length_side3,2) || (pow(length_side2,2)+pow(length_side3,2)) == pow(length_side1,2) ||  (pow(length_side1,2)+pow(length_side3,2)) == pow(length_side2,2))    
    {
        printf("It is an right angled triangle.\n");
    }
    else{
        printf("It is of another type.\n");
    }
    return 0;
}