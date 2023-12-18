#include <stdio.h>
int main()
{
    int arr[7]={1,2,3,4,5,6,7};

    int * ptr = &arr[0];

    ptr += 2;

    for(int i=0; i<5; i++) printf("%d \n", *(ptr+i));
}