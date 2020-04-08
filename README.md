# Parallel Programing

Simple repository with some implementations about parallel programing using OpenMP

## Functions (OpenMP)

### Para execução do Ambiente

**Name**  |  **Description**
:---:  |  :---:
**omp_set_num_threads**  |  Define o número de threadhs em regiões paralelas futuras a menos que seja substituído pela cláusula num_threads
**omp_get_num_threads**  |  Retorna o número de threads dentro da região paralela
**omp_get_thread_num**   |  Retorna o ID da thread em execução.
**omp_get_num_procs**    |  Retorna o número de processadores disponível no momento em que a função é chamada.

## Para rotinas de tempo

**Name**  |  **Description**
:---:  |  :---:
**omp_get_wtime**  |  Retorna um valor em segundos do tempo decorrido de algum ponto
**omp_get_wtick**  |  Retorna o número de segundos entre os clocks do processador
