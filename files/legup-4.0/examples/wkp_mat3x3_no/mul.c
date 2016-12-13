#include <stdio.h>

#define SIZE 100

int input[SIZE] = {28,2,17,15,23,25,26,12,24,12,62,17,20,29,
                63,26,24,12,2,6,11,8,27,12,12,23,62,22,67,
                35,29,2,22,58,69,67,93,56,11,42,19,23,1,19,
                84,7,8,24,15,70,13,26,1,80,6,23,62,170,196,181,
                5,225,284,236,46,5,129,13,257,24,195,282,45,14,267,134,
                64,43,50,87,8,26,78,88,4,3,51,24,9,32,56,16,
                68,39,12,26,86,4,39,27};

int y = 0;

void mat3x3(int N){

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
  decl static int input[100] = {28,2,17,15,23,25,26,12,24,12,62,17,20,29,
                63,26,24,12,2,6,11,8,27,12,12,23,62,22,67,
                35,29,2,22,58,69,67,93,56,11,42,19,23,1,19,
                84,7,8,24,15,70,13,26,1,80,6,23,62,170,196,181,
                5,225,284,236,46,5,129,13,257,24,195,282,45,14,267,134,
                64,43,50,87,8,26,78,88,4,3,51,24,9,32,56,16,
                68,39,12,26,86,4,39,27};
   decl int y = 0;
 }
 def search {
   arg algorithm = 'Exhaustive';
 }
) @*/

  int d, k;
  int first[10][10], second[10][10];
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
        y = y + first[i][k]*second[k][d];
    }
  }
) @*/

    for (i = 0; i <= (n-1); i=i+1)
    {
      for (d = 0; d <= (n-1); d=d+1)
      {
        for (k = 0; k <= (n-1); k=k+1)
          y = y + first[i][k]*second[k][d];
      }
    }
/*@ end @*/
/*@ end @*/
}


int main(void) {

  mat3x3(SIZE);

 printf("\nSum: %d\n\n", y);

 if(y == 338560)
 printf("PASS\n");
 else
 printf("FAIL\n");

return 0;
}

