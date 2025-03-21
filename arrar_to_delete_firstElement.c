#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n); 
    int arr[n];  
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int newArr[n - 1];
    for (int i = 1; i < n; i++) {
        newArr[i - 1] = arr[i];  
    }
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", newArr[i]);
    }
    printf("\n"); 
    return 0;
}
