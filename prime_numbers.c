/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int a[10] ={2,4,7,9,3,6,11,17,22,21};
  int b[5];
  for (int i=0; i <9; i++)
  {

    int count =0;
    for (int j=1; j <=a[i]; j++)
    {


      if ((a[i]%(j)==0))
      {
        count+=1;
      }

    }
    if(count>2)
    {
      continue;
    }
    else if(count==2)
    {
      static int k=0;
      b[k]= a[i];
      k+=1;
    }
  }

  for(int m3=0; m3<5;m3++)
  {
    printf("%d\t", b[m3]);
  }
  getch();
  return 0;
}
