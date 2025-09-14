#include <stdio.h>

int main(){
    int order_size;
    printf("Enter the order size = : ");
    scanf("%d",&order_size);
    if(order_size%3 ==0 && order_size%5==0){
        printf("Run the offer");
    }
    return 0;
}