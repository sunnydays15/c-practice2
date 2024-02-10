#include <stdio.h>

struct employee{
    char name[30];
    char num[20];
    int salary;
};

int main(){
    struct employee info;
    scanf("%s %s %d", info.name, info.num, &info.salary);

    printf("이름: %s\n주민등록번호: %s\n급여 정보: %d\n", info.name, info.num, info.salary);

    return 0;
}