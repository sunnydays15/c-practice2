#include <stdio.h>
#include <string.h>
int main(){
    char S[100];
    scanf("%s", S);

    int arr[26];
    for(int i=0; i<26; i++)
        arr[i]=-1;

    int cnt=0;
    for(int i=0; i<strlen(S); i++){
        if(arr[(int)S[i]-97]==-1){
            arr[S[i]-97]=cnt;
        }
        cnt++;
    }
    
    for(int i=0; i<26; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}