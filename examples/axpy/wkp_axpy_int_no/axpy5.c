#include <stdio.h>
#define SIZE 10
int const a1=1;
int const a2=2;
int const a3=1;
int const a4=2;
int const a5=1;
int x1[SIZE]={1,1,1,1,1,1,1,1,1,1};
int x2[SIZE]={2,2,2,2,2,2,2,2,2,2};
int x3[SIZE]={3,3,3,3,3,3,3,3,3,3};
int x4[SIZE]={4,4,4,4,4,4,4,4,4,4};
int x5[SIZE]={5,5,5,5,5,5,5,5,5,5};
int y[SIZE];
void axpy5(int N, int *y, 
	    int a1, int *x1, int a2, int *x2, 
	    int a3, int *x3, int a4, int *x4,
	    int a5, int *x5) {

  int n=N;
  register int i;


  for (i=0; i<=n-1; i++)
    y[i]=y[i]+a1*x1[i]+a2*x2[i]+a3*x3[i]+a4*x4[i]+a5*x5[i];


}

int main(void) {
	axpy5(SIZE,y,a1,x1,a2,x2,a3,x3,a4,x4,a5,x5);
	printf ("Result y[SIZE]: %lf\n", y[SIZE-1]);
	printf ("Result y[SIZE]: %f\n", y[SIZE-1]);
	printf ("Result y[SIZE]: %e\n", y[SIZE-1]);

return 0;
}

