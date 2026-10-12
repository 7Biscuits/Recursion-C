#include <stdio.h>

int sumDigits(int n) {
    if (n == 0)
        return 0;
    
    return (n%10) + sumDigits(n/10);
}

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0) n = -n;

    int result = sumDigits(n);
    printf("%d\n", result);
}