#include<stdio.h>
#include <stdlib.h>

void binarySearch(int N, int *y){

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
     decl dynamic int y = 0;
   }
   def search {
   arg algorithm = 'Exhaustive';
 }
) @*/

    int a[],m;
    int n=N;

    register int i;

    for(i=0 ; i <= (n-1) ; i=i+1)
      a[i] = (rand() % 300);

    m = 222;

//int i;
/*@ begin Loop (

	transform Unroll(ufactor=UF)
  for(i=0 ; i <= (n-1) ; i=i+1)
  {
     if(a[i] == m)
	y=1;
  }
) @*/

    for(i=0 ; i <= (n-1) ; i=i+1)
    {
      if(a[i] == m)
	y=1;
    }

/*@ end @*/
/*@ end @*/
}
