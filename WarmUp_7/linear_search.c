#include <stdio.h>

int linearSearch(int arr[], int length, int target) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int array[] = {1, 4, 7, 9, 12};
    int target = 9;
    int length = sizeof(array) / sizeof(array[0]);
    int index = linearSearch(array, length, target);
    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found.\n");
    }
    return 0;
}
