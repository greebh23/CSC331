/**********************************************************************
 * @file Homework1.c
 * @brief This program finds A - B. It takes in two decimal numbers (A and B) 
 * from user input. It uses the two’s complement method to calculate 
 * and output the result.
 * @author Blythe Greene
 * @date September 1, 2025
 ***********************************************************************/

#include <stdio.h>

//This function performs the addition of two bianry numbers using two's complement.
unsigned char add_binary(unsigned char A, unsigned char B) {
    unsigned char result; //The result is A + (-B)
    // (~B + 1) is the two's complement of B 
    result = A + (~B + 1);
    //Return the result from the addition
    return result;
}

// The main() gets user input and calls the function add_binary().
// It displays the result in the decimal form and also prints the 
// result as an 8-bit binary number.
int main() {
    // A and B are two decimal numbers given by the user.
    unsigned char A;
    unsigned char B;
    // result is the difference from A - B calculation.
    unsigned char result;
    //Get user input for A and B
    printf("Enter number for A: ");
    // Read unsigned char input for A
    scanf("%hhu", &A);
    printf("Enter number for B: ");
    // Read unsigned char input for B
    scanf("%hhu", &B);
    
    // Call the add_binary function
    // result stores result of A + (~B+1).
    result = add_binary(A, B);  
    
    // Print the decimal value of the result
    printf("Decimal Result: %d\n", result);
    // Print the binary value of the result and make it 8 bits
    printf("Binary Result:  ");
    // The loop prints an 8 bit binary number. It loops through 
    // each bit from the most significant bit (bit 7) 
    // to least significant (bit 0). Start with shifting right by i positions. 
    for (int i = 7; i >= 0; i--) {
        printf("%u", (result >> i) & 1);
    }
    return 0;
}
