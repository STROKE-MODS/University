#include <stdio.h>
int main(){
    int a[5],highest,second_highest;
    printf("Enter the number : ");
    scanf("%d",&highest);
    a[0] = highest;
    for(int i=1;i<5;i++){
        printf("Enter the number : ");
        scanf("%d",&a[i]);
        if(a[i]>highest){
            highest = a[i];
        }
    }
    if(a[0]>a[1]){
        highest = a[0];
        second_highest = a[1];
    }
    else{
        highest = a[1];
        second_highest = a[0];
    }
    for(int i=2;i<5;i++){
        if(a[i]>highest){
            second_highest = highest;
            highest = a[i];
        }
        else if(a[i]>second_highest && a[i] != highest){
            second_highest = a[i];
        }
    }
  printf("The highest number is  : %d\nThe second highest number is : %d",highest,second_highest);
    return 0;
}