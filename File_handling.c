/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h> 
#include <errno.h> // to call a global variable errno - to indicating any error during function call
#include <string.h>


 
int main()
{
    FILE *fp;
    
    fp = fopen ("a.txt", "rb");
    
    if(fp==NULL)
    {
        printf("Value of errno: %d\n", errno);
        printf("Error opening the file: %s\n",strerror(errno));
        perror("Error printed by perror");
        exit(EXIT_FAILURE);
        
    }

    return 0;
}