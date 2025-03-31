//3) Write a function to print Second largest Element and its position
#include <stdio.h>
void second_largest(int arr[], int n) {
    int largest = arr[0];
    int second_largest = arr[0];
    int largest_pos = 0;
    int second_largest_pos = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            second_largest_pos = largest_pos;
            largest = arr[i];
            largest_pos = i;
        }
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
            second_largest_pos = i;
        }
    }
    
    printf("\nSecond largest element: %d\n", second_largest);
    printf("Position of second largest element: %d\n", second_largest_pos+1);
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
    second_largest(arr, n);
    return 0;
}
