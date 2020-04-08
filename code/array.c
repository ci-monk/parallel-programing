#include<omp.h>
#include<locale.h>
#include<stdio.h>
#include<stdlib.h>

#define MAX 100

void set_portuguese();
void cabecalho();

int main(int argc, char const *argv[]){

  set_portuguese();
  cabecalho();

  int i;
  int *A, *B, *C;

  //Alocando e inicializando os arrays
  printf("\nAlocando e Inicializando os Arrays...");
  A = (int *)malloc(MAX*sizeof(int));
  B = (int *)malloc(MAX*sizeof(int));
  C = (int *)malloc(MAX*sizeof(int));

  //Inicializando valores para somar
  printf("\n\nPreenchendo os Arrays com os dados a serem somados");
  for (i = 0; i < MAX; i++){
    A[i] = i * 2;
    B[i] = i * 3;
  }

  //Exibindo valores
  printf("\n\nExibindo valores dos Arrays A e B...\n\n");
  for(i = 0; i < MAX; i++){
    printf("\t%d \t %d\n", A[i], B[i]);
  }

  printf("\nEstamos fora do contextos paralelo... Iremos realizar a soma dos vetores em paralelo...\n");

  //Realizando soma em paralelo - Usamos o shared para compartilhar os Arrays entre as Threads.
  //Naturalmente uma Thread não pode acessar a cópia de outra Thread.
  #pragma omp parallel for default(none) shared(A, B, C)
  for(i = 0; i < MAX; i++){
    C[i] = A[i] + B[i];
  }

  printf("\nProcessamos a soma e saímos da região paralela...");

  //Exibindo valores
  printf("\n\nExibindo valores da soma dos Arrays...\n\n");
  for(i = 0; i < MAX; i++){
    printf("\t%d\n", C[i]);
  }

  printf("\nFim do programa... Iremos dar um free nos Arrays alocados...\n\n");

  //Free Arrays
  free(A);
  free(B);
  free(C);

  return 0;
}

void set_portuguese(){
  setlocale(LC_ALL, "Portuguese");
}

void cabecalho(){
  printf("\n**************************************************");
  printf("\n*                                                *");
  printf("\n*                                                *");
  printf("\n* PROGRAMACAO PARALELA COM OPENMP - LUCCA PESSOA *");
  printf("\n*                                                *");
  printf("\n*                                                *");
  printf("\n**************************************************\n");
}
