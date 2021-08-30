#include <stdlib.h>
#include <stdio.h>
#define MAX 255

int busca_linear(int, int[], int);

int main(){
    int v[MAX];
    int n, i, x;
    
    printf("Type n: ");
    scanf("%i",&n);

    for (i=0; i<n; i++){
        printf("Type v[%i]: ", i);
        scanf("%i",&v[i]);
    }

    printf("Type x: ");
    scanf("%i",&x);

    printf("Position = %i", busca_linear(x,v,n));
    
    return 0;
}


int busca_linear(int x, int v[], int n){
    if(v[n]==x) return n;
    if(n==0) return -1;
    return busca_linear(x, v, n-1);
}