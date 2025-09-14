#include <stdio.h>
#include <math.h>

int main(){
    int number,power,result;
    printf("Enter the number : ");
    scanf("%d",&number);
    printf("Enter the power to be raise by : ");
    scanf("%d",&power);
    result = pow(number,power);
    printf("The result is : %d\n",result);

    return 0;
}