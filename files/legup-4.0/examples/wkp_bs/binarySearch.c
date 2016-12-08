#include<stdio.h>
#include <stdlib.h>


void sort(int* number, int n{

 /*Sort the given array number , of length n*/

int temp=0,j,i;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(number[j] >number[j+1])
            {
                temp=number[j];
                number[j]=number[j+1];
                number[j+1]=temp;
            }
        }
    }
}

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
     decl dynamic int y[N] = 0;
   }
   def search {
   arg algorithm = 'Exhaustive';
 }
) @*/

    int a[100],m,l,u,mid;
    int n=N;

    register int i;

    for(i=0 ; i <= (n-1) ; i=i+1)
      a[i] = (rand() % 300);

    sort(a, 100);
    m = 222;
    l=0,u=n-1;

/*@ begin Loop (

	transform Unroll(ufactor=UF)
  for(i=0 ; i <= (n-1) ; i=i+1)
  {

      if (l>u)
        break;

       mid=(l+u)/2;
       if(m==a[mid])
       {
           y[0] = 1;
           break;
       }
       else if(m<a[mid])
       {
           u=mid-1;
       }
       else
           l=mid+1;
  }
) @*/

    for(i=0 ; i <= (n-1) ; i=i+1)
    {

        if (l>u)
          break;

         mid=(l+u)/2;
         if(m==a[mid])
         {
             y[0] = 1;
             break;
         }
         else if(m<a[mid])
         {
             u=mid-1;
         }
         else
             l=mid+1;
    }

/*@ end @*/
/*@ end @*/
}
