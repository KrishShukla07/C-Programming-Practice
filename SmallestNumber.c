#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Using if-else to find the smaller number
    if(num1 < num2) {
        printf("%d is the smallest number\n", num1);
    } else if(num2 < num1) {
        printf("%d is the smallest number\n", num2);
    } else {
        printf("Both numbers are equal: %d\n", num1);
    }
    
    return 0;
}
