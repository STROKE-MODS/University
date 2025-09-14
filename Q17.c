#include <stdio.h>

int main(){
    char character;
    printf("Enter a alphabet : ");
    scanf("%c",&character);
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' )
    {
        printf("It is an vowel.\n");
    }
    else{
        printf("It is an consonent.\n");
    }
    return 0;
}