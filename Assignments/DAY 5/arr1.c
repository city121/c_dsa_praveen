#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n);  
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("allocation failed ");
        return 1; 
    }
    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    int sum=0;
    for (int i=0;i<n;i++) {
        sum += arr[i];
    }
    printf("%d ", sum);
    free(arr);
}
