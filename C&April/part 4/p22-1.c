#include <stdio.h>

struct employee{
    char name[20];
    char number[20];
    int salary;
};

int main(){
    struct employee person;

    fputs("종업원 이름: ", stdout);
    scanf("%s", person.name);
    fputs("주민등록번호: ", stdout);
    scanf("%s", person.number);
    fputs("급여정보: ", stdout);
    scanf("%d", &person.salary);

    //출력
    printf("%s\n%s\n%d\n", person.name, person.number, person.salary);
    
    return 0;
}