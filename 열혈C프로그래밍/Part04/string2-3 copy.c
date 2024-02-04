#include <stdio.h>
#include <string.h>
// void CompareName(char* nptr1, char* nptr2, int len1, int len2){
//     int len=(len1>len2)? len1 : len2 ;

//     if(!strncmp(nptr1, nptr2, len))
//         printf("이름이 같습니다.\n");
//     else
//         printf("이름이 다릅니다.\n");
// }

// void CompareAge(char* aptr1, char* aptr2, int len1, int len2){
//     char age1[50];
//     char age2[50];

//     for(int i=len1+1; i<strlen(aptr1)+1; i++) age1[i-len1-1]=aptr1[i];
//     for(int i=len2+1; i<strlen(aptr2)+1; i++) age2[i-len2-1]=aptr2[i];

//     if(!strcmp(age1, age2))
//         printf("나이가 같습니다.\n");
//     else
//         printf("나이가 다릅니다.\n");
// }

int main(int argc, char** argv){
    char str1[50];
    char str2[50];
    argv[1], argv[2], argv[3], argv[4];
    atoi(argv[2]), atoi(argv[4]);

    if(argv[1]==argv[3])

    printf("두 사람의 이름과 나이를 입력하시오. ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1)-1]=0;

    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2)-1]=0;

    int len1, len2;
    for(int i=0; str1[i]!=' '; i++) len1=i;
    for(int i=0; str2[i]!=' '; i++) len2=i;

    CompareName(str1, str2, len1, len2);
    CompareAge(str1, str2, len1, len2);

    return 0;
}