//5) Write a recursive function to print digits in word of a given number.
#include <stdio.h>

// This function recursively prints each digit of a number in word form
// How it works:
// 1. If the number is less than 10, it directly prints the word for that digit
// 2. For numbers >= 10, it:
//    a. Recursively calls itself with n/10 (all digits except the last)
//    b. Then prints the word for the last digit (n%10)
// Why recursion:
// - It naturally handles the digits from left to right
// - Each recursive call processes one less digit until we reach a single digit
void printDigitInWord(int n) {
    // Base case: if n is negative, print "Negative" and call function with positive value
    if (n < 0) {
        printf("Negative ");
        printDigitInWord(-n);
        return;
    }
    
    // Base case: if n is a single digit, print its word form
    if (n < 10) {
        switch(n) {
            case 0: printf("Zero"); break;
            case 1: printf("One"); break;
            case 2: printf("Two"); break;
            case 3: printf("Three"); break;
            case 4: printf("Four"); break;
            case 5: printf("Five"); break;
            case 6: printf("Six"); break;
            case 7: printf("Seven"); break;
            case 8: printf("Eight"); break;
            case 9: printf("Nine"); break;
        }
    } else {
        // Recursive case: first print all digits except the last one
        printDigitInWord(n / 10);
        
        // Then print a space followed by the last digit
        printf(" ");
        
        // Print the last digit in word form
        printDigitInWord(n % 10);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Number in words: ");
    printDigitInWord(num);
    printf("\n");
    
    return 0;
}
