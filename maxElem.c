#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int findMax(int arr[], int n) {
    if (n == 1) return arr[0];

    return max(arr[n-1], findMax(arr, n-1));
}

int main() {
    int a[] = {5, 2, 1, 4, 9, 3};
    int n = sizeof(a)/sizeof(a[0]);
    int max = findMax(a, n);
    printf("%d", max);
}