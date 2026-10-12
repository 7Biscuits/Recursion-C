#include <stdio.h>

int sumN(int n) {
    if (n == 0)
        return 0;
    
    return n + sumN(n-1);
}

int main() {
    int a = sumN(10);
    printf("%d", a);
}