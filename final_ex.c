#include <string.h>
#include <stdio.h>
#include <string.h>
#define MAX 255

typedef struct {
    char name[MAX];
    int age;
} PESSOA;

void trade (PESSOA*, PESSOA*);
int show_vector(PESSOA *, int);
void quicksort(PESSOA*, int, int);
int particionar(PESSOA*, int, int, int);

int main(){
    PESSOA array[26] = {{"Gohan", 23}, {"Goku", 43}, {"Chichi", 43}, {"Goten", 13}, {"Vegeta", 48}, {"Bulma", 47}, {"Trunks", 14}, {"Mr. Satan", 44}, {"Sanji", 19}, {"Chopper", 19}, {"Robin", 28}, {"Franky", 34}, {"Brook", 88}, {"All Might", 49}, {"Tomura", 20}, {"Aizawa", 31}, {"Hawks", 23}, {"Midoriya", 16}, {"Jeanist", 36}, {"Togata", 18}, {"Endeavour", 46}, {"Dabi", 24}, {"Uraraka", 15}, {"Kirishima", 15}, {"Todoroki", 15}, {"Bakugo", 15}};

    show_vector(array, 26);
    printf("\n");
    quicksort(array, 0, 26);
    show_vector(array, 26);    

    return 0;
}


int show_vector(PESSOA *p, int n) {
    int i;
    for (i=0; i<n; i++){
        printf("%s %i\n", p[i].name, p[i].age);
    }
}

void trade(PESSOA *a, PESSOA *b) {
    PESSOA aux = *a;
    *a = *b;
    *b = aux;
}

void quicksort(PESSOA *v, int primeiro_indice, int ultimo_indice) {
  int pivo, novoPivo;
  if( primeiro_indice < ultimo_indice ) {
    pivo = (primeiro_indice + ultimo_indice) / 2;
    novoPivo = particionar(v, primeiro_indice, ultimo_indice, pivo);
    quicksort(v, primeiro_indice, novoPivo - 1); // Esquerda
    quicksort(v, novoPivo + 1, ultimo_indice); // Direita
  }
}
    
int particionar(PESSOA *v, int primeiro_indice, int ultimo_indice, int pivo) {
  int i, j;
  PESSOA valor_pivo = v[pivo];
  trade(&v[pivo], &v[ultimo_indice]);
  j = primeiro_indice;
  for( i = primeiro_indice; i < ultimo_indice; i++ ) {
    if ( strcmp(v[i].name,valor_pivo.name) < 0) {
      trade(&v[i], &v[j]);
      j++;
    }
  }
  trade(&v[j], &v[ultimo_indice]);
  return j;
}
