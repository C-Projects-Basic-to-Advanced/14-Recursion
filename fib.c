#include <stdlib.h>
#include <stdio.h>

int fibo(int);

int main(){
    int n;
    printf("Type n: ");
    scanf("%i",&n);

    printf("F(%d)=%d", n, fibo(n));
    
    return 0;
}

int fibo(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    return fibo(n-1)+fibo(n-2);
}