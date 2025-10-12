#include <stdio.h>
int main(){
    int a[10],total=0,avg=0;
    for(int i=0;i<10;i++){
        printf("Enter the salary of employee %d : ",i+1);
        scanf("%d",&a[i]);
        total+=a[i];
        avg +=a[i];
    }
    printf("The total salary is : %d\nThe average salary is : %.1f",total,(float)avg/10);
    return 0;
}