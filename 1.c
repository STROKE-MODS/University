#include <stdio.h>

int main(){
    int a[5],total=0;
    for(int i=0;i<5;i++){
        printf("Enter the marks of student %d : ",i+1);
        scanf("%d",&a[i]);
        total +=a[i];
    }
    printf("The total marks are : %d\n",total);
    return 0;
}