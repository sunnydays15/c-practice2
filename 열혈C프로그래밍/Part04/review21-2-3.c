#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void CompareName(char * name1, char * name2, int len1, int len2){

    if(len1 != len2)
        printf("이름이 다릅니다. ");
    else{
        int j = 0;
        for(j = 0; j < len1; j++){
            if(name1[j] != name2[j])
                break;
        }
        if(j == len1) printf("이름이 같습니다. ");
        else printf("이름이 다릅니다. ");
    }
}

void CompareAge(char * info1, char * info2, int len1, int len2){
    int age1 = atoi(&info1[len1+1]);
    int age2= atoi(&info2[len2+1]);

    if(age1 == age2) printf("나이가 같습니다.\n");
    else printf("나이가 다릅니다.\n");
}

int main(){
    char info1[20];
    char info2[20];

    fgets(info1, sizeof(info1), stdin);
    fgets(info2, sizeof(info2), stdin);

    int len1 = 0, len2 = 0;
    for(int i = 0; info1[i] != ' '; i++) len1++;
    for(int i = 0; info2[i] != ' '; i++) len2++;

    CompareName(info1, info2, len1, len2);
    CompareAge(info1, info2, len1, len2);

    return 0;
}