#include <stdio.h>
#include <string.h>

int main(){
    char str1[30];
    char str2[30];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int len1 = 0, len2 = 0;
    for(len1 = 0; str1[len1] != ' '; len1++) continue;
    for(len2 = 0; str2[len2] != ' '; len2++) continue;

    char name1[20];
    char name2[20];

    strncpy(name1, str1, len1);
    strncpy(name2, str2, len2);

    if(!strcmp(name1, name2))
        printf("이름이 같습니다.\n");
    else
        printf("이름이 다릅니다.\n");

    int same_age = 1;
    while(str1[len1] != '\0' || str2[len2] != '\0'){
        if(str1[len1] != str2[len2]){
            same_age = 0;
            break;
        }
        else{
            len1++;
            len2++;
        }
    }
    if(same_age == 1)
        printf("나이가 같습니다.\n");
    else
        printf("나이가 다릅니다.\n");

    return 0;
}