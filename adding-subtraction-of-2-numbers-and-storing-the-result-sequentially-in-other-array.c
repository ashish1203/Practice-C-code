/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <conio.h> 

int main()
{
    int a[8] = {1,-4,8,4,3,-6,2,3};
    int c[4];
    int d[4];
    int size = *(&a + 1) - a;

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
    
    for(int i=0; i<size; i+2)
    {
        static int j=1;

        static int k =0;
            if(j>i)
            {
                c[k] = a[i] + a[j];
                
                k++;
                j+=2;
                i+=2;

            }
            else
            {
            break;
            };
        };
    
    printf("\nnew array after addition of 2 continous nos\n");
    for(int m2=0; m2<4;m2++)
    {
      printf("%d\t", c[m2]);
    }

    for(int m=0; m<4;m++)
    {
      //printf("new array after addition of 2 continous nos %d\n", c[m]);
      
      if(c[m] >0)
      {
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
    for(int m3=0; m3<2;m3++)
    {
      printf("%d\t", d[m3]);
    }
    //printf("new array having +ve values  %d\n", d[0]);
     //getch();
     return 0;
}