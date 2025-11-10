#include <stdio.h>
#include <string.h>

void displayReverse(int *arr, int size) {
    printf("1D array in reverse: ");
    for (int i = size - 1; i >= 0; i--)
        printf("%d ", *(arr + i));
    printf("\n");
}

void display2D(int (*arr)[3]) {
    printf("2D array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", *(*(arr + i) + j));
        printf("\n");
    }
}

int sum1D(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += *(arr + i);
    return sum;
}

int max2D(int (*arr)[3]) {
    int max = *(*(arr + 0) + 0);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (*(*(arr + i) + j) > max)
                max = *(*(arr + i) + j);
    return max;
}

int main() {
    int arr1D[5], arr2D[3][3];

    printf("Enter 5 integers for 1D array:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", arr1D + i);

    printf("Enter 9 integers for 3x3 2D array:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", (*(arr2D + i) + j));

    displayReverse(arr1D, 5);
    display2D(arr2D);
    printf("Sum of 1D array: %d\n", sum1D(arr1D, 5));
    printf("Max of 2D array: %d\n", max2D(arr2D));

    return 0;
}