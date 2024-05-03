#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 구조체 배열 동적할당 
    delete가 실행되었을 경우, (근데 realloc을 줄이면 분명 뒤에 있는 데이터가 삭제될 텐데)
    이 경우, 실행할때마다 새로운 힙 영역 할당이 맞음(이러면 더블 포인터를 사용해야함)
    없애야 할 경우, free함수 사용.
*/

typedef struct{
    char name[20];
    char tel_num[30];
}Telephone;

int main(){
    int num_of_person = 0;
    int idx = -1;
    Telephone * dict = (Telephone *)malloc(sizeof(Telephone)*num_of_person);

    while(1){
        printf("\n*****MENU*****\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Print All\n");
        printf("5. Exit\n");
        printf("Choose the item: ");

        int item;
        scanf("%d", &item);
        getchar();

        if(item == 1){
            printf("[ INSERT ]\n");

            num_of_person++, idx++;
            dict = (Telephone *)realloc(dict, sizeof(Telephone)*num_of_person);

            printf("Input Name: ");
            fgets(dict[idx].name, sizeof(dict[idx].name), stdin);
            dict[idx].name[strlen(dict[idx].name)-1] = 0;

            printf("Input Tel Number: ");
            fgets(dict[idx].tel_num, sizeof(dict[idx].tel_num), stdin);
            dict[idx].tel_num[strlen(dict[idx].tel_num)-1] = 0;

            printf("            Data Inserted\n");
        }
        else if(item == 2){
            printf("[ DELETE ]\n");

            char name_to_delete[20];
            printf("Write the name to delete: ");
            fgets(name_to_delete, sizeof(name_to_delete), stdin);
            name_to_delete[strlen(name_to_delete) - 1] = 0;

            for(int i = 0; i <= num_of_person; i++){
                if(i == num_of_person){
                    printf("Cannot Find the name\n");
                }
                else if(!strcmp(name_to_delete, dict[i].name)){
                    for(int j = i; j < num_of_person; j++){
                        dict[j] = dict[j+1];
                    }
                    num_of_person--; idx--;
                    printf("            Data Deleted\n");
                    break;
                }
            }
        }
        else if(item == 3){
            printf("[ SEARCH ]\n");

            char name_to_search[20];
            printf("Write the name to search: ");
            fgets(name_to_search, sizeof(name_to_search), stdin);
            name_to_search[strlen(name_to_search) - 1] = 0;

            for(int i = 0; i <= num_of_person; i++){
                if(i == num_of_person){
                    printf("Cannot Find the name\n");
                }
                else if(!strcmp(name_to_search, dict[i].name)){
                    printf("Name: %s    Tel: %s\n", dict[i].name, dict[i].tel_num);
                    break;
                }
            }
        }
        else if(item == 4){
            printf("[ Print All Data]\n");
            
            for(int i = 0; i < num_of_person; i++){
                // if(dict[i].name[0] != 0)
                    printf("Name: %s    Tel: %s\n", dict[i].name, dict[i].tel_num);
            }
        }
        else if(item == 5){
            printf("[ EXIT ]\n");
            break;
        }
        else
            printf("Choose the item in 1 to 5\n");
        
    }
    return 0;
}