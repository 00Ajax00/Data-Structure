#include <stdio.h>
int main() {
    int arr[6] = {10, 20, 30, 40, 50}; 
    int n = 5; 
    int new_element = 60;
    arr[n] = new_element;
    n++;
    printf("Array after insertion at the end:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
