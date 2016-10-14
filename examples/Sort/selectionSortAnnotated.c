#include <stdio.h>
#include <stdlib.h>

void sort(int N, int *y){

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
   param N[] = [10000];
 }
 def input_vars {
   decl dynamic int y[N] = 0;
 }
 def search {
   arg algorithm = 'Randomsearch';
 }
) @*/

   int d, position, swap;
   int n=N;
   
//   register int i;
   
   int i;
   for ( i = 0 ; i <= (n-1) ; i=i+1 )
      y[i] = (rand() % 300);
 
   for ( i = 0 ; i <= (n-2) ; i=i+1 )
   {
      position = i;

      for ( d = (i + 1) ; d <= (n-1) ; d=d+1 )
      {
         if ( y[position] > y[d] )
            position = d;
      }
      if ( position != i )
      {
         swap = y[i];
         y[i] = y[position];
         y[position] = swap;
      }
   }

/*@ begin Loop ( 
  transform Unroll(ufactor=UF) 
   for ( i = 0 ; i <= (n-1) ; i=i+1 )
      printf("%d\t", y[i]);
) @*/

   for ( i = 0 ; i <= (n-1) ; i=i+1 )
      printf("%d\t", y[i]);

/*@ end @*/
/*@ end @*/
}
