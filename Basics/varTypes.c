// Name: Alyssa Comstock
// Date created: 11/19/2021
// Date updated: 11/19/2021
// Description: Contains the function that displays the sizes of the different data types.


#include <stdio.h>

int main(int argc, char *argv[]){
    // function that prints the sizes of the different data types


    // printing the variable types, and their sizes
    printf("A char is %ld byte(s)\n", sizeof(char));
    printf("An int is %ld bytes\n", sizeof(int));
    printf("A float is %ld bytes\n", sizeof(float));
    printf("A double is %ld bytes\n", sizeof(double));
    printf("A short int is %ld bytes\n", sizeof(short int));
    printf("A long int is %ld bytes\n", sizeof(long int));
    printf("A long double is %ld bytes\n", sizeof(long double));

    printf("\n\n");

    // Printing the variables with different representations, for example ints in hex
    printf("1000 in decimal is %d\n", 1000);
    printf("1000 in octal is 0%o\n", 1000);
    printf("1000 in hecadecimal is 0x%x\n", 1000);
    printf("01750 in octal is %d\n");
    printf("0x3e8 in decimal is %d\n", 0x3e8);

    return 0;
}