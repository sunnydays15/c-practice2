#include <stdio.h>
int main(){
    int black[6]={1, 1, 2, 2, 2, 8};

    int white[6];
    for(int i=0; i<6; i++)
        scanf("%d", &white[i]);

    int arr[6];
    for(int i=0; i<6; i++)
        arr[i]=black[i]-white[i];

    for(int i=0; i<6; i++)
        printf("%d ", arr[i]);

    return 0;
}