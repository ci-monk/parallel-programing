#include<omp.h>
#include<locale.h>
#include<stdio.h>
#include<stdlib.h>

void set_portuguese();
void cabecalho();

int main(int argc, char const *argv[]){
  set_portuguese();
  cabecalho();

  int num_threads;

  printf("\nNos diga a quantidade de Threads desejada:\n");
  scanf("%d", &num_threads);

  omp_set_num_threads(num_threads);

  printf("\n1 - Estamos fora do contexto paralelo...\n");
  // Fork
  #pragma opm parallel
  {
    printf("\nEntramos dentro do contexto paralelo...\n");
    int num_threads = omp_get_num_threads();
    int thread_id = omp_get_thread_num();
    printf("\nEu sou a Thread %d de um total de %d\n", thread_id, num_threads);
  }
  // Join
  printf("\n2 - Estamos fora do contexto paralelo...\n\n");
  // Fork
  #pragma opm parallel num_threads(4)
  {
    printf("Entramos dentro do contexto paralelo...\n");
    int num_threads = omp_get_num_threads();
    int thread_id = omp_get_thread_num();
    printf("\nEu sou a Thread %d de um total de %d\n", thread_id, num_threads);
  }
  // Join
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

