#include <stdio.h>
struct employee{
    char name[30];
    char num[20];
    int salary;
};

int main(){
    struct employee info[3];
    for(int i=0; i<3; i++){
        scanf("%s %s %d", info[i].name, info[i].num, &info[i].salary);
    }

    for(int i=0; i<3; i++){
        printf("%s %s %d\n", info[i].name, info[i].num, info[i].salary);
    }
    return 0;
}