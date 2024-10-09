#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int p = b - a;
    int q = b;
    
    int d = gcd(p, q);
    
    p /= d;
    q /= d;
    
    printf("%d %d", p, q);
    
    return 0;
}