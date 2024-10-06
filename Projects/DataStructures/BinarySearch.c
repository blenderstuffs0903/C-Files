#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key);

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}

int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + ((right - left) / 2); 
        printf("%d ", mid);

        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}
