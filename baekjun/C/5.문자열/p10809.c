#include <stdio.h>
int main(){
    char S[100];
    scanf("%s", S);

    int len=0;
    for(int i=0; S[i]!=0; i++)
        len++;

    int arr[26];
    for(int i=0; i<26; i++)
        arr[i]=-1;
    
    // for(int j=97; j<123; j++){
    //     for(int i=0; i<len; i++){
    //         if(S[i]==j && S[i]!=-1){
    //             arr[j-97]=i;
    //         }
    //     }
    // }

    for(int i = 0 ; i < len ; i++){
        int idx = (int)S[i]-97;
        if(arr[idx] == -1) 
            arr[idx] = i;
    }
    for(int i=0; i<26; i++)
        printf("%d ", arr[i]);
    
    printf("\n");

    return 0;
}