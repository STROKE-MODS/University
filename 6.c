#include <stdio.h>
int main(){
    int a[5],count=0;
    for(int i=0;i<5;i++){
        printf("Enter the number %d : ",i+1);
        scanf("%d",&a[i]);
        if(a[i]%3==0 && a[i]%5==0){
            count+=1;
        }
    }
    printf("The numbers which are divisible by both 3 and 5 are %d\n",count);

    return 0;
}