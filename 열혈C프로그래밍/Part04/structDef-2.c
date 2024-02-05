#include <stdio.h>

struct employee{
    char name[30];
    char num[20];
    int salary;
};

int main(){
    struct employee arr[3];

    for(int i=0; i<3; i++){
        printf("이름 입력: ");
        scanf("%s", arr[i].name);
        printf("주민등록번호 입력: ");
        scanf("%s", arr[i].num);
        printf("급여 정보 입력: ");
        scanf("%d", &arr[i].salary);
    }
    printf("\n");
    for(int i=0; i<3; i++)
        printf("이름: %8s\n주민등록번호: %8s\n급여 정보: %8d\n", arr[i].name, arr[i].num, arr[i].salary);
    
    return 0;
}