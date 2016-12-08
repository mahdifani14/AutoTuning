#include <stdio.h>

#define SIZE 100

int input[SIZE] = {283,286,177,115,293,235,286,192,249,121,62,127,290,259,
                263,226,240,126,172,136,11,68,267,129,182,230,62,223,67,
                235,29,102,222,258,269,267,193,256,211,142,129,273,21,119,
                284,37,98,224,215,270,113,226,91,80,56,273,62,170,196,181,
                105,225,284,236,46,5,129,13,257,24,195,282,45,14,267,134,
                164,243,50,187,108,276,278,188,84,3,251,254,199,132,56,176,
                168,139,112,226,186,294,239,27};

int correctOutput[SIZE] = {3,5,11,13,14,21,24,27,29,37,45,46,50,56,56,62,62,
                          62,67,68,80,84,91,98,102,105,108,112,113,115,119,121,
                          126,127,129,129,129,132,134,136,139,142,164,168,170,172,
                          176,177,181,182,186,187,188,192,193,195,196,199,211,215,
                          222,223,224,225,226,226,226,230,235,235,236,239,240,243,
                          249,251,254,256,257,258,259,263,267,267,267,269,270,273,
                          273,276,278,282,283,284,284,286,286,290,293,294};

int y[SIZE];

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

   register int i;

   for ( i = 0 ; i <= (n-1) ; i=i+1 )
      y[i] = input[i];

// int i;
/*@ begin Loop (

	transform Unroll(ufactor=UF)
	for ( i = 0 ; i <= (n-2) ; i=i+1 )
	   {
	      position = i;

	      transform Unroll(ufactor=UF)
	      for ( d = (i + 1) ; d <= (n-1) ; d=d+1 )
	      {
		 if ( y[position] > y[d] )
		 {
		    position = d;
		    swap = y[i];
		    y[i] = y[position];
		    y[position] = swap;
		 }
	      }
	   }
) @*/

   for ( i = 0 ; i <= (n-2) ; i=i+1 )
   {
      position = i;

      for ( d = (i + 1) ; d <= (n-1) ; d=d+1 )
      {
         if ( y[position] > y[d] )
            position = d;

         swap = y[i];
         y[i] = y[position];
         y[position] = swap;
      }
   }

/*@ end @*/
/*@ end @*/
}

int main(void) {

  sort(SIZE,y);

  register int i;
  for ( i = 0 ; i < SIZE ; i=i+1 )
     printf("%d\t", y[i]);

  printf("\n\n-----------\n");

   for ( i = 0 ; i < SIZE ; i=i+1 )
      printf("%d\t", correctOutput[i]);

return 0;
}
