#include <stdio.h>
#include <string.h>

int main() {
    char narasiman[10];

   
    printf("Enter a string: ");
    fgets(narasiman, sizeof(narasiman), stdin);//it store only maximum characters of array.

    
    printf("You entered: %s\n", narasiman);// it will shows only the first 0-9 characters whic is given by user 

   
    printf("Overflowed String - ");//it will show only the overflowed strings
    fgets(narasiman, sizeof(narasiman), stdin);//it store the overflowed string

   
    printf("You entered: %s\n", narasiman);


    return 0;
}