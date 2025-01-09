#include <stdio.h>

int sumOfArray(int arr[], int n) {
    if (n == 0)
        return 0;
    return arr[n - 1] + sumOfArray(arr, n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("%d\n", sumOfArray(arr, n));
    return 0;
}
