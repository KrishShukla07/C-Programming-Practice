#include <stdio.h>
int main() {

    int length, width; // variables for the sides of the rectangle

    printf("Enter the length of the rectangle: ");

    scanf("%d", &length); // read the length from user input 

    printf("Enter the width of the rectangle: ");

    scanf("%d", &width); // read the width from user input

    int perimeter = 2 * (length + width); // calculate the perimeter

    printf("Perimeter of the rectangle is: %d\n", perimeter); // print the perimeter

    return 0; // end of the program 
}