#include <stdlib.h>
#include <stdio.h>
#define MAX 255

int sum(double[], int);

int main(){
    double v[MAX];
    int n, i;
    
    printf("Type n: ");
    scanf("%i",&n);

    for (i=0; i<n; i++){
        printf("Type v[%i]: ", i);
        scanf("%lf",&v[i]);
    }

    printf("Sum = %i", sum(v, n));
    
    return 0;
}

int sum(double v[], int n){
    if(n==1) return v[0];
    return sum(v,n-1)+v[n-1];
}