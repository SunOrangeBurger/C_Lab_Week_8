#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    if ((number % 3 == 0 || number % 7 == 0) && !(number % 3 == 0 && number % 7 == 0)) {
        printf("Acceptable\n");
    } else {
        printf("It is unacceptoble, tell them it is unacceptoble -Carlos Sainz\n");
    }
    
    return 0;
}
