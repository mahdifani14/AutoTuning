#include <stdio.h>
#include <stdlib.h>

#define N 20
#define BLOCK_SIZE 4

int a[20][20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9,0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int b[20][20] = {10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9,10, 11, 12, 13, 14, 15, 16, 17, 18,9};

int main(void)
{
  int n = BLOCK_SIZE * (N/BLOCK_SIZE);
  int c[N][N] = {0};
  int sum=0;
  int output = 0;

  for(int k1=0;k1<n;k1+=BLOCK_SIZE)
  {
      for(int j1=0;j1<n;j1+=BLOCK_SIZE)
      {
          for(int k1=0;k1<n;k1+=BLOCK_SIZE)
          {
              for(int i=0;i<n;i++)
              {
                  for(int j=j1;j<j1+BLOCK_SIZE;j++)
                  {
                      sum = c[i][j];
                      for(int k=k1;k<k1+BLOCK_SIZE;k++)
                      {
                          sum += a[i][k] * b[k][j];
                          output += sum;
                      }
                      c[i][j] = sum;
                  }
              }
          }
      }
   }

  printf("%d\n", output);
  if (output == 118260000) {
    printf("RESULT: PASS\n");
  } else {
    printf("RESULT: FAIL\n");
  }

  return 0;
}
