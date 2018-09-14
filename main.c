/*
 * This program asks the user for 3 numbers, then swaps them in order to get the smallest value in the first variable
 * (variable1) and the greatest value in the third variable (variable3), using parameters passed by reference.
 *
 * Author: Gerardo González Becerril.
 * Date: September 13th, 2018.
 * E-mail: a01411981@itesm.mx
 */

 // Library needed.
#include <stdio.h>

// Declaring the swapping function.
void swapping(int *var1, int *var2, int *var3);

// Main function.
int main() {

    // Variables to store the three given values.
    int variable1;
    int variable2;
    int variable3;

    // Asks the user for three numbers and scans the input.
    printf("Give me an integer:\n");
    scanf("%d", &variable1);
    printf("Give me another integer:\n");
    scanf("%d", &variable2);
    printf("Give me yet another integer:\n");
    scanf("%d", &variable3);

    // Calls the swapping function.
    swapping(&variable1, &variable2, &variable3);

    // Prints the smallest and greatest values.
    printf("The smallest value is %d and the greatest value is %d.", variable1, variable3);

    return 0;

}

// Defining the swapping function.
void swapping(int *var1, int *var2, int *var3) {

    // Variables to store the temporal greatest and smallest values.
    int greatest = *var1;
    int smallest = *var1;

    // If statement to see if the second variable is greater than the first. If so, it becomes the new greatest.
    if (*var2 > greatest) {
        greatest = *var2;
    }

    // If statement to see if the third variable is greater than the current greatest. If so, it becomes the new one.
    if (*var3 > greatest) {
        greatest = *var3;
    }

    // If statement to see if the second variable is smaller than the first. If so, it becomes the new smallest.
    if (*var2 < smallest) {
        smallest = *var2;
    }

    // If statement to see if the third variable is smaller than the current smallest. If so, it becomes the new one.
    if (*var3 < smallest) {
        smallest = *var3;
    }

    // The first variable gets the smallest value and the third one, the greatest one.
    *var1 = smallest;
    *var3 = greatest;

}