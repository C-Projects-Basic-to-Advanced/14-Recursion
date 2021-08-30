#include <stdlib.h>
#include <stdio.h>

int mult(int, int);

int main(){
    int a, b;
    printf("Type a: ");
    scanf("%i",&a);
    printf("Type b: ");
    scanf("%i",&b);

    printf("%d*%d=%d", a, b, mult(a,b));
    
    return 0;
}

int mult(int a, int b){
    if (b==0) return 0;

    return a + mult(a,(b-1));
}
