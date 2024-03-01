#include <stdio.h>
/*
숫자   /   걸리는 시간
숫자 1 :   2
숫자 2 :   3
숫자 3 :   4
숫자 4 :   5
숫자 5 :   6
숫자 6 :   7
숫자 7 :   8
숫자 8 :   9
숫자 9 :   10
숫자 0 :   11

1. 문자열 입력 받기 + 문자열 길이 구하기 (CLEAR)
2. null나올때까지 반복하는 문자가 해당하는 
   숫자(걸리는 시간)를 반환하는 함수 구현
3. 문자의 길이로 하는 배열 만들기
4. 배열의 값 전부 합쳐서 출력
*/
int time(char code){
    if(code>=65 && code<68) return 3;
    else if(code>=68 && code<71) return 4;
    else if(code>=71 && code<74) return 5;
    else if(code>=74 && code<77) return 6;
    else if(code>=77 && code<80) return 7;
    else if(code>=80 && code<84) return 8;
    else if(code>=84 && code<87) return 9;
    else if(code>=87 && code<91) return 10;
}

int main(){
    char str[15];
    scanf("%s", str);

    int len=0;
    for(int i=0; str[i]!=0; i++)
        len++;

    int arr[len];
    for(int i=0; str[i]!=0; i++){
        arr[i]=time(str[i]);
    }
    int sum=0;
    for(int i=0; i<len; i++){
        sum += arr[i];
    }

    printf("%d\n", sum);

    return 0;
}