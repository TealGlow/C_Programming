// Name: Alyssa Comstock
// Date: 10/16/2021
// Description: Program that gets user input and displays it back to them.

#include <stdio.h>

int main(){
    int testInt;

    printf("Enter an integer: ");
    scanf("%d", &testInt);
    printf("Number = %d", testInt);

    return 0;
}