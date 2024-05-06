/*
ZZZZZ 36 => Z*36^4 + Z*36^3 + ... + Z*36^0
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char N[30]; int B;
    scanf("%s %d", N, &B);

    int sum = 0;
    int len = strlen(N);
    for(int i = 0; i < len; i++){
        int tmp;
        if(N[i] >= 'A' && N[i] <= 'Z'){
            tmp = (N[i]-'A')+10;
        }
        else{
            tmp = N[i] - '0';
        }
        sum += tmp * pow(B, len - 1 - i);
    }
    printf("%d\n", sum);
}