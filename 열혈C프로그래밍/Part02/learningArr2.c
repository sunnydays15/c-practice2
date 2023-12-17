#include <stdio.h>
int main()
{
    char arr[] = {'G','o','o','d',' ','t','i','m','e'};
    int arrlen = sizeof(arr) / sizeof(char);
    int i;

    for(i=0; i<9; i++)
        printf("%c", arr[i]);
    printf("\n");
    return 0;
}