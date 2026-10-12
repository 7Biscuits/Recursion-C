#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}

int main() {
    int a = gcd(24, 18);
    printf("%d", a);
}