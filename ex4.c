#include <stdlib.h>
#include <stdio.h>
#define MAX 255

int comb(int, int);

int main(){
    int n, m;
    
    printf("Digite n: ");
    scanf("%i",&n);

    printf("Digite m: ");
    scanf("%i",&m);

    printf("%i", comb(n,m));
    
    return 0;
}

int comb(int n, int m){
    if((n!=0)&&(m==0)) return 1;
    if(n==m) return 1;
    return comb(n-1,m-1)+comb(n-1,m);
}