#include <stdlib.h>
#include <stdio.h>

int mdc(int, int);

int main(){
    
    int n, m;
    
    printf("Type n: ");
    scanf("%i",&n);

    printf("Type m: ");
    scanf("%i",&m);

    printf("%i", mdc(n,m));

    return 0;
}


int mdc(int m, int n){
    if(m==0) return n;
    return mdc(n%m, m);
}