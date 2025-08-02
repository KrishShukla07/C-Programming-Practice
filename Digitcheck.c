#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf(" %c", &ch);
    
    // Using isdigit() would be another option, but we'll use character comparison
    if(ch >= '0' && ch <= '9') {
        printf("%c is a digit\n", ch);
    } else {
        printf("%c is not a digit\n", ch);
    }
    
    return 0;
}
// This program checks if the entered character is a digit (0-9).
// It uses character comparison to determine if the character falls within the range of '0' to '9'.