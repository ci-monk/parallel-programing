// other.c
// compile with: /openmp
#include<omp.h>
#include<locale.h>
#include<stdio.h>
#include<stdlib.h>

#define NUM_THREADS 8

// =============================================================================
// CALL FUNCTIONS TO BE USED IN MAIN
// =============================================================================

void set_portuguese();
void cabecalho();

// =============================================================================
// MAIN
// =============================================================================

int main(int argc, char const *argv[]){

  set_portuguese();
  cabecalho();

  printf("\nTotal de Threads a serem setadas: %d\n", NUM_THREADS);

  omp_set_num_threads(NUM_THREADS);

  printf("\nO máximo de threads é: %d", omp_get_max_threads());

  printf("\n\n1.1 - Entrando no contexto paralelo...\n");

  #pragma omp parallel
  {
    int num_threads = omp_get_num_threads();
    int thread_id = omp_get_thread_num();
    #pragma omp master
    {
      printf("Máximo de thread: %d\n", omp_get_max_threads());
    }
    printf("Eu sou a Thread %d de um total de %d\n", thread_id, num_threads);
  }

  printf("\n2.1 - Saindo no contexto paralelo...\n");

  printf("\nO máximo de threads é: %d", omp_get_max_threads());

  printf("\n\n1.2 - Entrando no contexto paralelo...\n");

  #pragma omp parallel num_threads(4)
    #pragma omp master
    {
      printf("\nMáximo de thread: %d", omp_get_max_threads());
    }

  printf("\n\n2.2 - Saindo no contexto paralelo...\n");

  printf("\nO máximo de threads é: %d", omp_get_max_threads());

  return 0;
}

// =============================================================================
// DECLARE FUNCTIONS
// =============================================================================

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
