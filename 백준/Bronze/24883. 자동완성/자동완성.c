#include <stdio.h>
int main() {
    char n;
    scanf("%c", &n);

    if (n == 'N' || n == 'n') {
        printf("Naver D2");
    } else {
        printf("Naver Whale");
    }

    return 0;
}