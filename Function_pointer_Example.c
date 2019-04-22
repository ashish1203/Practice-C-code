/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int add(int a, int b)
{
    int c;
    c= a+b;
    return c;
}

int main()
{
    int i;
    int (*f_ptr)(int, int);
    f_ptr= &add;
    i=f_ptr(10,20);
    
    printf("%d", i);
    return 0;
}
