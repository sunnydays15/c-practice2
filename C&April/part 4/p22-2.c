#include <stdio.h>

struct employee{
    char name[20];
    char number[20];
    int salary;
};

int main(){
    struct employee arr[3];

    // 입력
    for(int i = 0; i < 3; i++){
        fputs("종업원 이름: ", stdout);
        scanf("%s", arr[i].name);
        fputs("주민등록번호: ", stdout);
        scanf("%s", arr[i].number);
        fputs("급여정보: ", stdout);
        scanf("%d", &arr[i].salary);
    }
    printf("\n");
    // 출력
    for(int i = 0; i < 3; i++){
        printf("이름: %s\n", arr[i].name);
        printf("주민등록번호: %s\n", arr[i].number);
        printf("급여정보: %d\n", arr[i].salary);
    }
    return 0;
}