//Write a program to reverse elements of an array using pointer and print the array before and after the operation.
#include <stdio.h>

void reverse_array(int *arr, int n) {
    int *start = arr;
    int *end = arr + n - 1;
    int temp;
    
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[100];
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    // Print array before reversing
    printf("\nArray before reversing:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    // Reverse the array using pointer
    reverse_array(arr, n);
    
    // Print array after reversing
    printf("\nArray after reversing:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
