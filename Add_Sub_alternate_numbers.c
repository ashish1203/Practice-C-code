/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h> 
#include <stdlib.h>



int main()
{
    int a[8] = {1,-4,8,4,3,-6,2,3};
    int size = *(&a + 1) - a;

    int *c = (int*) malloc((size/2) * sizeof(int));
    //printf("\n%d\n", sizeof(c));

    printf("Initial elements in the array\n");
    for(int m1=0; m1<8;m1++)
    {
      printf("%d\t", a[m1]);
    }
    
    //printf("%d\n", *(&a[0]));
    //printf("%d\n", (&a + 1));
    //printf("%d\n", *(&a + 1));
    //printf("%d\n", a);
    //printf("%d\n", a+1);
    //printf("Size: %d\n", size);
    
    for(int i=0; i<size; i=i+4)
    {
        static int j=2;

        static int k =0;
            //if(j>i)
            //{
                c[k] = a[i] + a[i +1];
                c[k+1] = a[j] - a[j+1];
                
                k+=2;
                j+=4;
                //i+=4;

            //}
            //else
            //{
            //break;
            //};
        };
    
    printf("\nnew array after addition of 2 continous nos\n");
    int count =0;
    for(int m2=0; m2<4;m2++)
    {
      if(c[m2] >0)
      {
        count+=1;
      }
      printf("%d\t", c[m2]);
      }
    //printf("\n%d\n", count);
    
    int *d = (int*) malloc(1 * sizeof(int));
    //printf("%d", sizeof(d));
    for(int m=0; m<sizeof(c);m++)
    {
      //printf("new array after alternate add and subt of 2 continous nos %d\n", c[m]);
      //int count=0;

      if(c[m] >0)
      {
        //count+=1;
        static int n=0;
        d[n] = c[m];
        n=n+1;
      }

      else
      {
        ;
      }
      
    }
    printf("\nFinal array of only positive valueds\n");
    for(int m3=0; m3<count;m3++)
    {
      printf("%d\t", d[m3]);
    }
    free(c);
    free(d);
    //printf("new array having +ve values  %d\n", d[0]);
     getch();
     return 0;
}

