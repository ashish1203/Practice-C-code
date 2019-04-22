/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
/*
void fun(int a,int b) 
{
    printf("%d %d", a,b);
}*/

int main(void)
{
    
    static int i = 5;
    if(--i)
    {
        printf("%d", i);
        main(10);
    }
    return 0;
}










