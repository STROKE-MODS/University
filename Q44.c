#include <stdio.h>
#include <stdlib.h>

int main(){
    int integer,abs_value;
    printf("Enter an integer : ");
    scanf("%d",&integer);
    abs_value = abs(integer);
    printf("The absoulte value of %d is %d\n",integer,abs_value);
    return 0;
}