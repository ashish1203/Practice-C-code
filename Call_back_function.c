/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int a(int a, int b)
{
    int c= a+b;
}

int b(int (*f_ptr)(int, int) )
{
    int k = f_ptr(20,30);
    return k;
}

int main()
{
    int i,kk;
    
    int (*f_ptr)(int, int) =&a;
    
    //f_ptr= &a;
    i = f_ptr(10,20);
    
    printf("%d", i);
    
    kk= b(f_ptr);
    
    printf("%d", kk);

    return 0;
}
