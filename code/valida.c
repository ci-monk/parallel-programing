// valida.c
// compile with: /openmp
#include <omp.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define NUM_THREADS 4

void set_portuguese();
void cabecalho();

int main(int argc, char const *argv[]){
  set_portuguese();
  cabecalho();

  omp_set_num_threads(NUM_THREADS);

  printf("\nQuantidade de CPU(s): %d - Docker Limit...\n", omp_get_num_procs());

  printf("\n1 - Estamos fora do contexto paralelo...\n\n");

  // Fork
  #pragma omp parallel
  {
    int id = omp_get_num_threads();
    int thread_id = omp_get_thread_num();
    printf("Eu sou a Thread %d de um total de %d\n", thread_id, id);
  }
  // Join

  printf("\n2 - Estamos fora do contexto paralelo...\n\n");

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

