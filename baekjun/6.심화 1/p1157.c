#include <stdio.h>
#include <string.h>
void Count(char* word){
    int arr[26];
    int len = strlen(word);

    for(int i=0; i<len; i++){
        if(word[i]-'a'<0){
            arr[word[i]-'A']++;
        }
        else{
            arr[word[i]-'a']++;
        }
    }

    int max;
    int maxCheck=0;
    for(int i=0; i<26; i++){
        if(maxCheck<arr[i]){
            max=i;
            maxCheck=arr[i];
        }
    }
    for(int i=0; i<26; i++){
        if(maxCheck==arr[i] && max!=i){
            printf("?\n");
            return;
        }
    }
    printf("%C\n", max+'A');
}

int main(){
    char word[1000000];
    scanf("%s", word);

    Count(word);

    return 0;
}