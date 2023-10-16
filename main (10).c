#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n <= 1) {
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        int newSize = 0;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }

            if (count < 2) {
                arr[newSize] = arr[i];
                newSize++;
            }
        }

        for (int i = 0; i < newSize; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}