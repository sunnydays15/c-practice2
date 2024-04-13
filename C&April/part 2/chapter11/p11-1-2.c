#include <stdio.h>

int main(){
    char arr[12] = {'\"','G','o','o','d',' ','t','i','m','e','\"','\n'};

    for(int idx = 0; idx < 12; idx++)
        printf("%c", arr[idx]);
}