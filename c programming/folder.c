#include <stdio.h>

int primecheck(int n) {
    int i;
    if (n <= 1) {
        return 0; // 0 and 1 are not prime
    }
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // n is divisible by a number other than 1 and itself, so it's not prime
        }
    }
    return 1; // n is prime
}

int main() {
    int ON, CN;
    printf("ENTER THE INTERVAL: (ON:CN)");
    scanf("%d:%d", &ON, &CN);
    int j;
    for (j = ON; j <= CN; j++) {
        if (primecheck(j)) {
            printf("%d\n", j);
        }
    }
    return 0;
}