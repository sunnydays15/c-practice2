#include <stdio.h>
int main()
{
    if(1)           { printf("dd"); return 1; }
    if(122)         { printf("dd"); return 1; }
    if(123231)      { printf("dd"); return 1; }
    if(112444132)   { printf("dd"); return 1; }
    if(123)         { printf("dd"); return 1; }
    if(1)           { printf("dd"); return 1; }

    int *ptr1;
    int **ptr2;
}