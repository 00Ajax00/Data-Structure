#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);  
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int ele, pos;
    scanf("%d %d", &ele, &pos);
    int newArr[n + 1];
    for (int i = 0; i < n; i++) {
        if (i < pos - 1) {
            newArr[i] = arr[i];  
        } else if (i == pos - 1) {
            newArr[i] = ele; 
        } else {
            newArr[i] = arr[i - 1];  
        }
    }
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", newArr[i]);
    }
    printf("\n");  
    return 0;
}
