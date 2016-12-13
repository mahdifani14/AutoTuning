#include <stdio.h>
#include <stdlib.h>

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
/**-- (Generated by Orio)
Best performance cost:
  [0.0629379, 0.0655219, 0.0617061, 0.0648175, 0.060768]
Tuned for specific problem sizes:
  N = 10000
Best performance parameters:
  CFLAGS = -O2
  UF = 9
--**/


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
{
  int i;
  for (i=0; i<=n-10; i=i+9) {
    position=i;
    {
      int d;
      for (d=i+1; d<=n-9; d=d+9) {
        if (y[position]>y[d]) {
          position=d;
          swap=y[i];
          y[i]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+1)]) {
          position=(d+1);
          swap=y[i];
          y[i]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+2)]) {
          position=(d+2);
          swap=y[i];
          y[i]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+3)]) {
          position=(d+3);
          swap=y[i];
          y[i]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+4)]) {
          position=(d+4);
          swap=y[i];
          y[i]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+5)]) {
          position=(d+5);
          swap=y[i];
          y[i]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+6)]) {
          position=(d+6);
          swap=y[i];
          y[i]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+7)]) {
          position=(d+7);
          swap=y[i];
          y[i]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+8)]) {
          position=(d+8);
          swap=y[i];
          y[i]=y[position];
          y[position]=swap;
        }
      }
      for (d=n-((n-i-1)%9); d<=n-1; d=d+1)
        if (y[position]>y[d]) {
          position=d;
          swap=y[i];
          y[i]=y[position];
          y[position]=swap;
        }
    }
    position=(i+1);
    {
      int d;
      for (d=i+2; d<=n-9; d=d+9) {
        if (y[position]>y[d]) {
          position=d;
          swap=y[(i+1)];
          y[(i+1)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+1)]) {
          position=(d+1);
          swap=y[(i+1)];
          y[(i+1)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+2)]) {
          position=(d+2);
          swap=y[(i+1)];
          y[(i+1)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+3)]) {
          position=(d+3);
          swap=y[(i+1)];
          y[(i+1)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+4)]) {
          position=(d+4);
          swap=y[(i+1)];
          y[(i+1)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+5)]) {
          position=(d+5);
          swap=y[(i+1)];
          y[(i+1)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+6)]) {
          position=(d+6);
          swap=y[(i+1)];
          y[(i+1)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+7)]) {
          position=(d+7);
          swap=y[(i+1)];
          y[(i+1)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+8)]) {
          position=(d+8);
          swap=y[(i+1)];
          y[(i+1)]=y[position];
          y[position]=swap;
        }
      }
      for (d=n-((n-i-2)%9); d<=n-1; d=d+1)
        if (y[position]>y[d]) {
          position=d;
          swap=y[(i+1)];
          y[(i+1)]=y[position];
          y[position]=swap;
        }
    }
    position=(i+2);
    {
      int d;
      for (d=i+3; d<=n-9; d=d+9) {
        if (y[position]>y[d]) {
          position=d;
          swap=y[(i+2)];
          y[(i+2)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+1)]) {
          position=(d+1);
          swap=y[(i+2)];
          y[(i+2)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+2)]) {
          position=(d+2);
          swap=y[(i+2)];
          y[(i+2)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+3)]) {
          position=(d+3);
          swap=y[(i+2)];
          y[(i+2)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+4)]) {
          position=(d+4);
          swap=y[(i+2)];
          y[(i+2)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+5)]) {
          position=(d+5);
          swap=y[(i+2)];
          y[(i+2)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+6)]) {
          position=(d+6);
          swap=y[(i+2)];
          y[(i+2)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+7)]) {
          position=(d+7);
          swap=y[(i+2)];
          y[(i+2)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+8)]) {
          position=(d+8);
          swap=y[(i+2)];
          y[(i+2)]=y[position];
          y[position]=swap;
        }
      }
      for (d=n-((n-i-3)%9); d<=n-1; d=d+1)
        if (y[position]>y[d]) {
          position=d;
          swap=y[(i+2)];
          y[(i+2)]=y[position];
          y[position]=swap;
        }
    }
    position=(i+3);
    {
      int d;
      for (d=i+4; d<=n-9; d=d+9) {
        if (y[position]>y[d]) {
          position=d;
          swap=y[(i+3)];
          y[(i+3)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+1)]) {
          position=(d+1);
          swap=y[(i+3)];
          y[(i+3)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+2)]) {
          position=(d+2);
          swap=y[(i+3)];
          y[(i+3)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+3)]) {
          position=(d+3);
          swap=y[(i+3)];
          y[(i+3)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+4)]) {
          position=(d+4);
          swap=y[(i+3)];
          y[(i+3)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+5)]) {
          position=(d+5);
          swap=y[(i+3)];
          y[(i+3)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+6)]) {
          position=(d+6);
          swap=y[(i+3)];
          y[(i+3)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+7)]) {
          position=(d+7);
          swap=y[(i+3)];
          y[(i+3)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+8)]) {
          position=(d+8);
          swap=y[(i+3)];
          y[(i+3)]=y[position];
          y[position]=swap;
        }
      }
      for (d=n-((n-i-4)%9); d<=n-1; d=d+1)
        if (y[position]>y[d]) {
          position=d;
          swap=y[(i+3)];
          y[(i+3)]=y[position];
          y[position]=swap;
        }
    }
    position=(i+4);
    {
      int d;
      for (d=i+5; d<=n-9; d=d+9) {
        if (y[position]>y[d]) {
          position=d;
          swap=y[(i+4)];
          y[(i+4)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+1)]) {
          position=(d+1);
          swap=y[(i+4)];
          y[(i+4)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+2)]) {
          position=(d+2);
          swap=y[(i+4)];
          y[(i+4)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+3)]) {
          position=(d+3);
          swap=y[(i+4)];
          y[(i+4)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+4)]) {
          position=(d+4);
          swap=y[(i+4)];
          y[(i+4)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+5)]) {
          position=(d+5);
          swap=y[(i+4)];
          y[(i+4)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+6)]) {
          position=(d+6);
          swap=y[(i+4)];
          y[(i+4)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+7)]) {
          position=(d+7);
          swap=y[(i+4)];
          y[(i+4)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+8)]) {
          position=(d+8);
          swap=y[(i+4)];
          y[(i+4)]=y[position];
          y[position]=swap;
        }
      }
      for (d=n-((n-i-5)%9); d<=n-1; d=d+1)
        if (y[position]>y[d]) {
          position=d;
          swap=y[(i+4)];
          y[(i+4)]=y[position];
          y[position]=swap;
        }
    }
    position=(i+5);
    {
      int d;
      for (d=i+6; d<=n-9; d=d+9) {
        if (y[position]>y[d]) {
          position=d;
          swap=y[(i+5)];
          y[(i+5)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+1)]) {
          position=(d+1);
          swap=y[(i+5)];
          y[(i+5)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+2)]) {
          position=(d+2);
          swap=y[(i+5)];
          y[(i+5)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+3)]) {
          position=(d+3);
          swap=y[(i+5)];
          y[(i+5)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+4)]) {
          position=(d+4);
          swap=y[(i+5)];
          y[(i+5)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+5)]) {
          position=(d+5);
          swap=y[(i+5)];
          y[(i+5)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+6)]) {
          position=(d+6);
          swap=y[(i+5)];
          y[(i+5)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+7)]) {
          position=(d+7);
          swap=y[(i+5)];
          y[(i+5)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+8)]) {
          position=(d+8);
          swap=y[(i+5)];
          y[(i+5)]=y[position];
          y[position]=swap;
        }
      }
      for (d=n-((n-i-6)%9); d<=n-1; d=d+1)
        if (y[position]>y[d]) {
          position=d;
          swap=y[(i+5)];
          y[(i+5)]=y[position];
          y[position]=swap;
        }
    }
    position=(i+6);
    {
      int d;
      for (d=i+7; d<=n-9; d=d+9) {
        if (y[position]>y[d]) {
          position=d;
          swap=y[(i+6)];
          y[(i+6)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+1)]) {
          position=(d+1);
          swap=y[(i+6)];
          y[(i+6)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+2)]) {
          position=(d+2);
          swap=y[(i+6)];
          y[(i+6)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+3)]) {
          position=(d+3);
          swap=y[(i+6)];
          y[(i+6)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+4)]) {
          position=(d+4);
          swap=y[(i+6)];
          y[(i+6)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+5)]) {
          position=(d+5);
          swap=y[(i+6)];
          y[(i+6)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+6)]) {
          position=(d+6);
          swap=y[(i+6)];
          y[(i+6)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+7)]) {
          position=(d+7);
          swap=y[(i+6)];
          y[(i+6)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+8)]) {
          position=(d+8);
          swap=y[(i+6)];
          y[(i+6)]=y[position];
          y[position]=swap;
        }
      }
      for (d=n-((n-i-7)%9); d<=n-1; d=d+1)
        if (y[position]>y[d]) {
          position=d;
          swap=y[(i+6)];
          y[(i+6)]=y[position];
          y[position]=swap;
        }
    }
    position=(i+7);
    {
      int d;
      for (d=i+8; d<=n-9; d=d+9) {
        if (y[position]>y[d]) {
          position=d;
          swap=y[(i+7)];
          y[(i+7)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+1)]) {
          position=(d+1);
          swap=y[(i+7)];
          y[(i+7)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+2)]) {
          position=(d+2);
          swap=y[(i+7)];
          y[(i+7)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+3)]) {
          position=(d+3);
          swap=y[(i+7)];
          y[(i+7)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+4)]) {
          position=(d+4);
          swap=y[(i+7)];
          y[(i+7)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+5)]) {
          position=(d+5);
          swap=y[(i+7)];
          y[(i+7)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+6)]) {
          position=(d+6);
          swap=y[(i+7)];
          y[(i+7)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+7)]) {
          position=(d+7);
          swap=y[(i+7)];
          y[(i+7)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+8)]) {
          position=(d+8);
          swap=y[(i+7)];
          y[(i+7)]=y[position];
          y[position]=swap;
        }
      }
      for (d=n-((n-i-8)%9); d<=n-1; d=d+1)
        if (y[position]>y[d]) {
          position=d;
          swap=y[(i+7)];
          y[(i+7)]=y[position];
          y[position]=swap;
        }
    }
    position=(i+8);
    {
      int d;
      for (d=i+9; d<=n-9; d=d+9) {
        if (y[position]>y[d]) {
          position=d;
          swap=y[(i+8)];
          y[(i+8)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+1)]) {
          position=(d+1);
          swap=y[(i+8)];
          y[(i+8)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+2)]) {
          position=(d+2);
          swap=y[(i+8)];
          y[(i+8)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+3)]) {
          position=(d+3);
          swap=y[(i+8)];
          y[(i+8)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+4)]) {
          position=(d+4);
          swap=y[(i+8)];
          y[(i+8)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+5)]) {
          position=(d+5);
          swap=y[(i+8)];
          y[(i+8)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+6)]) {
          position=(d+6);
          swap=y[(i+8)];
          y[(i+8)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+7)]) {
          position=(d+7);
          swap=y[(i+8)];
          y[(i+8)]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+8)]) {
          position=(d+8);
          swap=y[(i+8)];
          y[(i+8)]=y[position];
          y[position]=swap;
        }
      }
      for (d=n-((n-i-9)%9); d<=n-1; d=d+1)
        if (y[position]>y[d]) {
          position=d;
          swap=y[(i+8)];
          y[(i+8)]=y[position];
          y[position]=swap;
        }
    }
  }
  for (i=n-((n-(0)-1)%9)-1; i<=n-2; i=i+1) {
    position=i;
    {
      int d;
      for (d=i+1; d<=n-9; d=d+9) {
        if (y[position]>y[d]) {
          position=d;
          swap=y[i];
          y[i]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+1)]) {
          position=(d+1);
          swap=y[i];
          y[i]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+2)]) {
          position=(d+2);
          swap=y[i];
          y[i]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+3)]) {
          position=(d+3);
          swap=y[i];
          y[i]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+4)]) {
          position=(d+4);
          swap=y[i];
          y[i]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+5)]) {
          position=(d+5);
          swap=y[i];
          y[i]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+6)]) {
          position=(d+6);
          swap=y[i];
          y[i]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+7)]) {
          position=(d+7);
          swap=y[i];
          y[i]=y[position];
          y[position]=swap;
        }
        if (y[position]>y[(d+8)]) {
          position=(d+8);
          swap=y[i];
          y[i]=y[position];
          y[position]=swap;
        }
      }
      for (d=n-((n-i-1)%9); d<=n-1; d=d+1)
        if (y[position]>y[d]) {
          position=d;
          swap=y[i];
          y[i]=y[position];
          y[position]=swap;
        }
    }
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
