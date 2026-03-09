#include <stdio.h>

void bubble_sort(int arr[], int n) {
    int i, j;
    int swapped;

    if (n <= 1) {
        return;
    }

    for (i = 0; i < n - 1; i++) {
        swapped = 0;
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void print_array(const int arr[], int n) {
    if (n <= 0) {
        printf("[empty]\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = (int)(sizeof(arr) / sizeof(arr[0]));

    printf("Original array: ");
    print_array(arr, n);

    bubble_sort(arr, n);

    printf("Sorted array:   ");
    print_array(arr, n);

    return 0;
}
