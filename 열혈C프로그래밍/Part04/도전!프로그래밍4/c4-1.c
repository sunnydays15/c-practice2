#include <stdio.h>
#include <string.h>

typedef struct point{
    char writer[20];
    char title[30];
    int page;
}Bookinfo;

int main(){
    Bookinfo arr[3];

    printf("도서 정보 입력\n");
    for(int i=0; i<3; i++){
        printf("저자: ");
        scanf("%s", arr[i].writer);
        getchar();

        printf("제목: ");
        fgets(arr[i].title, sizeof(arr[i].title), stdin);
        arr[i].title[strlen(arr[i].title)-1]=0;
        
        printf("페이지 수: ");
        scanf("%d", &arr[i].page);
        getchar();
    }

    printf("\n도서 정보 출력\n");
    for(int i=0; i<3; i++){
        printf("book %d\n", i+1);
        printf("저자: %s\n", arr[i].writer);
        printf("제목: %s\n", arr[i].title);
        printf("페이지 수: %d\n", arr[i].page);
    }

    return 0;
}