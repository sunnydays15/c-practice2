#include <stdio.h>

struct employee{
    char name[20];
    char num[20];
    int salary;
};

void info(char* pname, char* pnum, int salary){
    printf("이름: %s\n", pname);
    printf("주민등록번호: %s\n", pnum);
    printf("급여 정보: %d\n", salary);
}

int main(){
    struct employee user;

    fputs("종업원 이름 입력: ", stdout);
    scanf("%s", user.name);

    printf("주민등록번호 입력: ");
    scanf("%s", user.num);

    fputs("급여 정보 입력: ", stdout);
    scanf("%d", &user.salary);

    info(user.name, user.num, user.salary);

    return 0;
}