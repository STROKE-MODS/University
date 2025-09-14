#include <stdio.h>

int main(){
    int marks;
    printf("Enter the marks : ");
    scanf("%d",&marks);
    if(marks>=90 && marks<=100){
        printf("You had scored A grade.\n");
    }
    else if(marks>=80 && marks <90){
        printf("You had scored B grade.\n");
    }
    else if(marks>=70 && marks < 80){
        printf("You had scored C grade.\n");
    }
    else{
        printf("You had failed.\n");
    }
    
    return 0;
}