#include <stdio.h>
int main(){
    int a[30],min,daynumber;
    printf("Enter the temperatue of day 1 : ");
    scanf("%d",&min);
    a[0] = min;
    for(int i=1;i<30;i++){
        printf("Enter the temperatue of day %d : ",i+1);
        scanf("%d",&a[i]);
        if(min>a[i]){
            min = a[i];
            daynumber = i+1;
        }
    }
    printf("The minimum temperature was %d and on day %d\n",min,daynumber);
    return 0;
}