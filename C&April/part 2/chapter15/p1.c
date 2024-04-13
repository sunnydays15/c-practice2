#include <stdio.h>
void Odds(int * ptr1){
    int count = 0;

    printf("홀수 출력: ");
    for(int i = 0; i < 10; i++)
        if(ptr1[i]%2 == 1) count++;

    for(int i = 0; i < 10; i++){
        if(ptr1[i]%2 == 1){
            printf("%d", ptr1[i]);
            count--;
            if(count != 0)
                printf(", ");
        }
    }
    printf("\n");
}

void Evens(int * ptr2){
    int count = 0;

    printf("짝수 출력: ");
    for(int i = 0; i < 10; i++)
        if(ptr2[i]%2 == 0) count++;

    for(int i = 0; i < 10; i++){
        if(ptr2[i]%2 == 0){
            printf("%d", ptr2[i]);
            count--;
            if(count != 0)
                printf(", ");
        }
    }
    printf("\n");
}

int main(){
    int arr[10];
    for(int idx = 0; idx < 10; idx++){
        printf("입력: ");
        scanf("%d", &arr[idx]);
    }
    Odds(arr);
    Evens(arr);
    return 0;
}