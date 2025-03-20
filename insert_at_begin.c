#include <stdio.h>

int main() {
    int arr[6] = {10, 20, 30, 40, 50}; 
    int n = 5; 
    int new_element = 5;
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = new_element;
    n++;
    printf("Array after insertion at the beginning:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
