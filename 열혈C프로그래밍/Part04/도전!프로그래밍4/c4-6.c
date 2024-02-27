#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct point{
    char name[20];
    char telNum[30];
}Info;

//이름 및 전화번호 입력
void Insert(void){
    Info point;

    printf("[ INSERT ]\n");
    FILE * fp = fopen("TelNum.txt", "at");

    printf("Input Name: ");
    scanf("%s", point.name);
    fputs("Name: ", fp);
    fputs(point.name, fp);
    fputs("\t", fp);

    printf("Input Tel Number: ");
    scanf("%s", point.telNum);
    fputs("Tel: ", fp);
    fputs(point.telNum, fp);
    fputs("\n", fp);

    fclose(fp);
    printf("                Data Inserted\n\n");
    return;
}

//이름 검색 후 삭제
void Delete(char name[20]){
    printf("[ DELETE ]\n");
    FILE * origin = fopen("TelNum.txt", "rt");
    FILE * tmp = fopen("temp.txt", "wt");

    char str[100];
    while(fgets(str, sizeof(str), origin)!=NULL){
        if(!strcmp(str, name)){
            printf("FIND\n");
        }
        fputs(str, tmp);
    }
    free(origin);
    free(tmp);

    remove("TelNum.txt");
    rename("temp.txt", "TelNum.txt");

    return;
}

// 전부 다 출력
void PrintAll(void){
    printf("[ Print All Data ]\n");
    char str[30];
    FILE * fp = fopen("TelNum.txt", "rt");

    while(fgets(str, sizeof(str), fp) != NULL)
        printf("%s", str);
    
    fclose(fp);
    return;
}

int main(){
    int num;

    while(1){
    printf("*****MENU*****\n1. Insert\n2. Delete\n3. Search\n4. Print All\n5. Exit\n");
    printf("Choose the item: ");
    scanf("%d", &num);

    switch(num){
        case 1: {
            Insert();
            break;
        }
        case 2: {
            char name[20];
            printf("삭제할 이름 정보: ");
            scanf("%s", name);
            Delete(name);
            break;
        }
        case 4: {
            PrintAll();
            printf("\n");
            break;
        }
        case 5: {
            break;
        }
    }
    if(num==5){
        printf("프로그램 종료\n");
        break;
    }
    }
    return 0;
}