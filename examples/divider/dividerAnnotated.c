#include <stdio.h>
#include<stdlib.h>

// there are 10 golden test input vectors to perform a built-in self test of
// this circuit
#define NN 10
int TEST_INPUTS[NN][5] = {
{89384, 30887, 92778, 36916, 47794},
{85387, 60493, 16650, 41422, 2363},
{90028, 68691, 20060, 97764, 13927},
{80541, 83427, 89173, 55737, 5212},
{95369, 2568, 56430, 65783, 21531},
{22863, 65124, 74068, 3136, 13930},
{79803, 34023, 23059, 33070, 98168},
{61394, 18457, 75012, 78043, 76230},
{77374, 84422, 44920, 13785, 98538},
{75199, 94325, 98316, 64371, 38336}};

int main() {

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
     decl static int TEST_INPUTS[10][5] = {
     {89384, 30887, 92778, 36916, 47794},
     {85387, 60493, 16650, 41422, 2363},
     {90028, 68691, 20060, 97764, 13927},
     {80541, 83427, 89173, 55737, 5212},
     {95369, 2568, 56430, 65783, 21531},
     {22863, 65124, 74068, 3136, 13930},
     {79803, 34023, 23059, 33070, 98168},
     {61394, 18457, 75012, 78043, 76230},
     {77374, 84422, 44920, 13785, 98538},
     {75199, 94325, 98316, 64371, 38336}};
     decl int NN = 10;
   }
   def search {
     arg algorithm = 'Randomsearch';
   }
  ) @*/


    int i;
    unsigned sum = 0;
    int result = 0;

    /*@ begin Loop (
      transform Unroll(ufactor=UF)
      for (i = 0; i <= NN-1; i=i+1) {
          result =
              TEST_INPUTS[i][0] / 20000 +
              TEST_INPUTS[i][1] / 40000 +
              TEST_INPUTS[i][2] / 2000 +
              TEST_INPUTS[i][3] / 3000 +
              TEST_INPUTS[i][4] / 200;

          sum += result;
      }
    ) @*/

    // perform 5 divisions in parallel 10 times
    for (i = 0; i <= NN-1; i=i+1) {
        result =
            TEST_INPUTS[i][0] / 20000 +
            TEST_INPUTS[i][1] / 40000 +
            TEST_INPUTS[i][2] / 2000 +
            TEST_INPUTS[i][3] / 3000 +
            TEST_INPUTS[i][4] / 200;

        sum += result;
    }

    /*@ end @*/
    /*@ end @*/

    // check the result
    printf("Sum: %d\n", sum);
    if (sum == 2567) {
        printf("RESULT: PASS\n");
    } else {
        printf("RESULT: FAIL\n");
    }

    return sum;
}
