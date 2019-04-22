/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void memcopy(int *isrc, int *idst, int n)
{
    //int *p_src = *isrc;
    
    for (int i=0;i<n;i++)
    {
        idst[i] = isrc[i];
    }
    
}

int main()
{
    int src[] = {4,5,8,3,7,9};
    int size = sizeof(src)/sizeof(src[0]);
    int dest[size], i; 
    printf("%d", size);
 /*   
    memcopy(src,dest,sizeof(src));
    
    for (i=0;i<size;i++)
    {
        printf("%d", dest[i]);
    }
*/
    return 0;
}
