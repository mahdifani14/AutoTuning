#include <stdio.h>
#include <stdlib.h>

void mat3x3(int N, int *y){

/*@ begin PerfTuning (
 def build {
   arg build_command = 'gcc';
   #arg libs = '-lrt';  # Only needed on linux
 }
 def performance_counter {
   arg repetitions = 5;
 }
 def performance_params {
   param UF[] = range(1,11);
   param CFLAGS[] = ['-O0', '-O1', '-O2', '-O3'];
   #constraint divisible_by_two = (UF % 2 == 0);
 }
 def input_params {
   param N[] = [10];
 }
 def input_vars {
   decl dynamic int y[N] = 0;
 }
 def search {
   arg algorithm = 'Exhaustive';
 }
) @*/

  int d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
  int n=N;

  register int i;

  for (i = 0; i <= (n-1); i=i+1)
    for (d = 0; d <= (n-1); d=d+1)
      first[i][d] = (rand() % 100);

    for (i = 0; i <= (n-1); i=i+1)
      for (d = 0; d <= (n-1); d=d+1)
      second[i][d] = (rand() % 102);

// int i;
/*@ begin Loop (

	transform Unroll(ufactor=UF)
  for (i = 0; i <= (n-1); i=i+1)
  {
    for (d = 0; d <= (n-1); d=d+1)
    {
      for (k = 0; k <= (n-1); k=k+1)
        sum = sum + first[i][k]*second[k][d];

      multiply[i][d] = sum;
      sum = 0;
    }
  }
) @*/

    for (i = 0; i <= (n-1); i=i+1)
    {
      for (d = 0; d <= (n-1); d=d+1)
      {
        for (k = 0; k <= (n-1); k=k+1)
          sum = sum + first[i][k]*second[k][d];

        multiply[i][d] = sum;
        sum = 0;
      }
    }

    for (i = 0; i <= (n-1); i=i+1)
      for (d = 0; d <= (n-1); d=d+1)
        y[i*10+d] = multiply[i][d];

/*@ end @*/
/*@ end @*/
}