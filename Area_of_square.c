#include <stdio.h>
int main() {

    int side ; // Example variable for the side length of the square
    
    
    printf("Enter the side Length of the square:");
    
    scanf("%d", &side); // Read the side length from user input
    
    printf("Area is: %d\n", side * side); // Calculate and print the area of the square
    
    printf("Perimeter is: %d\n", 4 * side); // Calculate and print the perimeter of the square
    
    printf("Diagonal is: %.2f\n", side * 1.414); // Calculate and print the diagonal of the square

    
    return 0;
}