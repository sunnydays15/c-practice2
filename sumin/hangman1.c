// 행맨
// 처음에 아까 문제랑 똑같이 문자열 (영어 단어 하나를 받습니다.)
// 그리고 게임 플레이어는 그 문자열의 길이만 알 수 있습니다 답이 만약에 String 이라면, 6이라는 숫자만 압니다
// 기회는 10번있습니다.
// 사용자가 알파벳 하나를 입력합니다
// 그러면 만약에 그 문자열에 사용자가 입력한 알파벳이 들어가 있으면 "들어가 있습니다. _ T _ _ T _ 
// 만약에 알파벳이 그 문자열에 없다면 "들어가 잇지 않습니다. 목숨이 n 개 남았습니다".
// 모든 알파벳을 다 맞추신다면. "축하드립니다 " 하고 끝납니다.
// 목숨이 다하면 " 탈락입니다 !"

#include <stdio.h>
#include <string.h>
int Checking(int cha, char* ptr, char* parr){
    int tmp=0;
    for(int i=0; i<strlen(ptr); i++){
        if(ptr[i]==cha){
            parr[i]=cha;
            tmp++;
        }
        else continue;
    }
    if(tmp==0) return 0;
    else return 1;
}

int main(){
    char str[100];
    scanf("%s", str);

    printf("문자열의 길이는 %u입니다.\n", strlen(str));

    char arr[100];
    for(int i=0; i<strlen(str); i++){
        arr[i]='_';
    }

    int chance;
    for(chance=10; chance>0; ){
        char cha;
        scanf("%c", &cha);

        int result=Checking(cha, str, arr);

        if(str==arr){
            printf("축하드립니다.\n");
            break;
        }
        if(result==1){
            printf("들어가있습니다. %s\n", arr);
            chance--;
        }
        else{
            chance--;
            printf("들어가있지 않습니다. 목숨이 %d개 남았습니다.\n", chance);
        }
    }
    if(chance==0) printf("탈락입니다!\n");

    return 0;
}