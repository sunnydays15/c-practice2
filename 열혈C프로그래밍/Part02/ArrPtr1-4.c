#include <stdio.h>
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int * ptr1 = &arr[0];
    int * ptr2 = &arr[5];

    for(int i=3; i<6; i++) arr[i]=*(ptr1+5-i);
    for(int i=0; i<3; i++) arr[i]=*(ptr2-2)+*(ptr2-2+i);

    for(int i=0; i<6; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}