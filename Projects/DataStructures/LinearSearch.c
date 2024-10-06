#include <stdio.h>

int linearSearch(int array[], int arraySize, int key);

int main() {
    int array[] = {15, 16, 6, 8, 5};
    int arraySize = sizeof(array) / sizeof(int);
    int key = 6;
    
    int index = linearSearch(array, arraySize, key);

    if (index != -1)
    {
        printf("Element %d found at index %d", key, index);
    } else {
        printf("Element %d was not found in the array");
    }
    
    return 0;
}

int linearSearch(int array[], int arraySize, int key) {
    for (int i = 0; i < arraySize; i++) {
        if (array[i] == key) {
            return i;
        }
    }
    return -1;
}