#include <stdio.h>
int main(){
    int a[10],max;
    printf("Enter the price of item number 1  :");
    scanf("%d",&max);
    a[0] = max;
    for(int i=1;i<10;i++){
        printf("Enter the price of  item number %d :",i+1);
        scanf("%d",&a[i]);
        if(max<a[i]){
            max = a[i];
        }
    }
    printf("The maximum price of the list is : %d",max);
    return 0;
}