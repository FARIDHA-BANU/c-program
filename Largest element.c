#include <stdio.h>

int findLargest(int arr[], int n) {
    if (n == 1)
        return arr[0];
    int max = findLargest(arr, n - 1);
    return (arr[n - 1] > max) ? arr[n - 1] : max;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("%d\n", findLargest(arr, n));
    return 0;
}
