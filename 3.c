#include <stdio.h>
int main(){
    int a[5],even=0,odd=0;
    for(int i=0;i<5;i++){
        printf("Enter a number : ");
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            even+=a[i];
        }
        else{
            odd += a[i];
        }
    }
    printf("The sum of odd numbers are : %d\nThe sum of even numbers are : %d\n",odd,even);
    return 0;
}