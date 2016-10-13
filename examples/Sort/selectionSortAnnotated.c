#include <stdio.h>
#include <stdlib.h>

int main()
{

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
   param N[] = [100000];
 }
 def input_vars {
   decl dynamic double array[N] = random;
 }
 def search {
   arg algorithm = 'Exhaustive';
 }
) @*/

   int array[100], n, d, position, swap;
   int N = 100;
   n = N;
   int c;
 
   for ( c = 0 ; c <= (n-1) ; c=c+1 )
      array[c] = (rand() % 300);
 
   for ( c = 0 ; c <= (n-2) ; c=c+1 )
   {
      position = c;

      for ( d = (c + 1) ; d <= (n-1) ; d=d+1 )
      {
         if ( array[position] > array[d] )
            position = d;
      }
      if ( position != c )
      {
         swap = array[c];
         array[c] = array[position];
         array[position] = swap;
      }
   }

/*@ begin Loop ( 
  transform Unroll(ufactor=UF) 
   for ( c = 0 ; c <= (n-1) ; c=c+1 )
      printf("%d\t", array[c]);
) @*/
 
   for ( c = 0 ; c <= (n-1) ; c=c+1 )
      printf("%d\t", array[c]);

   return 0;

/*@ end @*/
/*@ end @*/
}
