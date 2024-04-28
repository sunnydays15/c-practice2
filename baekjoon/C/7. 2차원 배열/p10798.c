#include <stdio.h>

int main(){
    char arr[5][15];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 15; j++){
            arr[i][j] = 0;
        }
    }

    for(int i = 0; i < 5; i++)
        scanf("%s", arr[i]);
    
    for(int j = 0; j < 15; j++){
        for(int i = 0; i < 5; i++){
            if(arr[i][j] != 0)
                printf("%c", arr[i][j]);
        }
    }
    printf("\n");

    return 0;
}