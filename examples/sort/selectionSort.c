#include <stdio.h>
#include <stdlib.h>

int main()
{
   int array[100], n, c, d, position, swap;

//   printf("Enter %d integers\n", n);

   for ( c = 0 ; c < 100 ; c++ )
   {
      array[c] = (rand() % 300);
     printf("%d\t", array[c]);
   }
   printf("\n\n----------------\n");
   for ( c = 0 ; c < ( 100 - 1 ) ; c++ )
   {
      position = c;

      for ( d = c + 1 ; d < 100 ; d++ )
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

//   printf("\nSorted list in ascending order:\n");

   for ( c = 0 ; c < 100 ; c++ )
      printf("%d\t", array[c]);

//   printf("\n");
   return 0;
}
