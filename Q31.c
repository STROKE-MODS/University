#include <stdio.h>

int main(){
    int day;
    printf("Enter the day number : ");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("The day is monday\n");
        break;
    
    case 2:
        printf("The day is tuesday\n");
        break;
    
    case 3:
        printf("The day is wednesday\n");
        break;
    
    case 4:
        printf("The day is thurday\n");
        break;
    
    case 5:
        printf("The day is friday\n");
        break;
    
    case 6:
        printf("The day is saturday\n");
        break;
    case 7:
        printf("The day is sunday\n");
        break;
    
    default:
    printf("Invlid day.\n");
        break;
    }
    return 0;
}