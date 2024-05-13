#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x ;
    printf("Enter the search element");
    scanf("%d",&x);
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        printf("Element not present in the array");
    else
        printf("Element found at index: %d", result);
    return 0;
}

