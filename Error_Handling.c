/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <errno.h>  // to call a global variable errno - to indicating any error during function call
#include <string.h>

 File *fp;
 
int main()
{
   
    
    fp = fopen("a.txt");
    printf("value of error: %d", errno);
    printf("the error is: %d", strerror(errno));
    return 0;
}
