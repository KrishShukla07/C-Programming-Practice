#include<stdio.h>

int main () {

    int num1, num2, num3; // variables to hold the three numbers

    printf("Enter 3 num:\n");

    scanf("%d %d %d", &num1, &num2, &num3); // read three numbers from user input

    float avg = (num1 + num2 + num3) / 3.0; // calculate the average

    printf("Average of 3 num is: %f\n", avg); // print the average with two decimal places

    return 0; // end of the program
}