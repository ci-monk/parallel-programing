// procs.c
// compile with: /openmp
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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

  printf("\nNúmero de processadores disponível no momento: %d", omp_get_num_procs());

  printf("\n1 - Entrando no contexto paralelo...\n");

  #pragma omp parallel
  {
    #pragma omp master
    {
      printf("\nNúmero de processadores disponível no momento: %d", omp_get_num_procs());
    }
  }

  printf("\n2 - Saindo do contexto paralelo...\n\n");

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
