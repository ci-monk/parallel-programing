// integral_solution_serial.c
// compile with: /openmp

/* #############################################################################
## DESCRIPTION: Integral Solutin in Serial using OpenMP - PI Value.
## NAME: integral_solution_serial.c
## AUTHOR: Lucca Pessoa da Silva Matos
## DATE: 10.04.2020
## VERSION: 1.0
## EXEMPLE:
##     PS C:\> gcc -fopenmp -o integral_solution_serial integral_solution_serial.c
##############################################################################*/

// =============================================================================
// LIBRARYS
// =============================================================================

#include <omp.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// =============================================================================
// MACROS
// =============================================================================

#define STEPS 100000000
#define LOOP(i, n) for(int i = 0; i < n; i++)

// =============================================================================
// CALL FUNCTIONS
// =============================================================================

void cabecalho();
void set_portuguese();

double step;

// =============================================================================
// MAIN
// =============================================================================

int main(int argc, char const *argv[]){

  set_portuguese();
  cabecalho();

  printf("\nHey! Nesse script iremos calcular o valor de PI com base em calculos de integral.");

  int i;
  double x, pi, sum = 0.0, tempo_inicial, tempo_final;

  step = 1.0/(double) STEPS;

  tempo_inicial = omp_get_wtime();

  LOOP(i, STEPS){
    x = (i + 0.5) * step;
    sum += 4.0 / (1.0 + x * x);
  }

  tempo_final = omp_get_wtime() - tempo_inicial;

  printf("\n\nO tempo gasto no contexto serial foi de: %lf\n", tempo_final);

  pi = sum * step;

  printf("\nO valor de PI = %f\n\n", pi);

  return 0;
}

// =============================================================================
// FUNCTIONS
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
