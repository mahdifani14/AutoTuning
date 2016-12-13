#include <stdio.h>

#define SIZE 100

int input[SIZE] = {283,286,177,115,293,235,286,192,249,121,62,127,290,259,
                263,226,240,126,172,136,11,68,267,129,182,230,62,223,67,
                235,29,102,222,258,269,267,193,256,211,142,129,273,21,119,
                284,37,98,224,215,270,113,226,91,80,56,273,62,170,196,181,
                105,225,284,236,46,5,129,13,257,24,195,282,45,14,267,134,
                164,243,50,187,108,276,278,188,84,3,251,254,199,132,56,176,
                168,139,112,226,186,294,239,27};

int y[SIZE];

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
  decl int SIZE = 100;
  decl static int input[100] = {283,286,177,115,293,235,286,192,249,121,62,127,290,259,
                 263,226,240,126,172,136,11,68,267,129,182,230,62,223,67,
                 235,29,102,222,258,269,267,193,256,211,142,129,273,21,119,
                 284,37,98,224,215,270,113,226,91,80,56,273,62,170,196,181,
                 105,225,284,236,46,5,129,13,257,24,195,282,45,14,267,134,
                 164,243,50,187,108,276,278,188,84,3,251,254,199,132,56,176,
                 168,139,112,226,186,294,239,27};
   decl dynamic int y[N] = 0;
 }
 def search {
   arg algorithm = 'Exhaustive';
 }
) @*/

  int d, k;
  int first[10][10], second[10][10], multiply[10][10]={0};
  int n=N/10;

  register int i;

  for (i = 0; i <= (n-1); i=i+1)
    for (d = 0; d <= (n-1); d=d+1)
      first[i][d] = input[i];

    for (i = 0; i <= (n-1); i=i+1)
      for (d = 0; d <= (n-1); d=d+1)
      second[i][d] = input[i];

// int i;
/*@ begin Loop (

	transform Unroll(ufactor=UF)
  for (i = 0; i <= (n-1); i=i+1)
  {
    for (d = 0; d <= (n-1); d=d+1)
    {
      for (k = 0; k <= (n-1); k=k+1)
        multiply[i][d] = multiply[i][d] + first[i][k]*second[k][d];
    }
  }
) @*/

    for (i = 0; i <= (n-1); i=i+1)
    {
      for (d = 0; d <= (n-1); d=d+1)
      {
        for (k = 0; k <= (n-1); k=k+1)
          multiply[i][d] = multiply[i][d] + first[i][k]*second[k][d];
      }
    }

    for (i = 0; i <= (n-1); i=i+1)
      for (d = 0; d <= (n-1); d=d+1)
        y[i*10+d] = multiply[i][d];

/*@ end @*/
/*@ end @*/
}


int main(void) {

  mat3x3(SIZE,y);

  register int i;
  for ( i = 0 ; i < SIZE ; i=i+1 )
     printf("%d\t", y[i]);

return 0;
}
