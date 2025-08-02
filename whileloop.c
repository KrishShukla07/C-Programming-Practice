#include<stdio.h>

int main () {

   int n;
   printf("Enter a number:\n");
    scanf("%d", &n); // read the number from user input

    int i = 0;
    while(i<=n) {
        printf("%d\n", i);
        i++; // increment i by 1
    }
    // end of while loop
    return 0; // end of the program
}