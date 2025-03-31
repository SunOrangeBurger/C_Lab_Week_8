#include <stdio.h>

int main() {
    int start, end;
    printf("Enter a number: ");
    scanf("%d", &start);
    printf("Enter a number: ");
    scanf("%d", &end);
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }
    for (int i = start; i <= end; i++) {
        if(i%13 == 0) {
            break;
        }

        if(i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
