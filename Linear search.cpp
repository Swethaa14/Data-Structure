#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {12, 45, 67, 89, 101, 234, 567, 999};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter the search element");
    scanf("%d",&key);
    int result = linearSearch(arr, n, key);
    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index: %d\n", result);
    }
    return 0;
}

