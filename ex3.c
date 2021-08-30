#include <stdlib.h>
#include <stdio.h>
#define MAX 255

int pot(int, int);

int main() {
    int x, n;
    printf("Type the base: ");
    scanf("%i", &x);
    printf("Type the power: ");
    scanf("%i", &n);

    printf("%i^%i=%i",x,n,pot(x,n));
    return 0;
}

int pot(int x, int n){
    if (n == 0) return 1;
    if (n % 2 == 0) return pot(x*x, n/2);
    return pot(x, n-1) * x;
}