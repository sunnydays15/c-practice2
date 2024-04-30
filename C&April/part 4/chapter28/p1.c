/* 도서 관리용 프로그램 작성
[제목, 저자명, 페이지수] 구조체 배열로 도서에 대한 정보를 저장하는 구조로 작성, 3권의 도서에 대한 정보 입력
*/

#include <stdio.h>
#include <string.h>

typedef struct{
    char writer[20];
    char title[30];
    int page;
}Book_info;

int main(){
    Book_info book[3];

    printf("도서 정보 입력\n");
    for(int i = 0; i < 3; i++){
        printf("저자: ");
        scanf("%s", book[i].writer);
        getchar();  // 개행 삭제

        printf("제목: ");
        fgets(book[i].title, sizeof(book[i].title), stdin);
        book[i].title[strlen(book[i].title)-1] = 0;

        printf("페이지 수: ");
        scanf("%d", &book[i].page);
    }

    printf("\n도서 정보 출력\n");
    for(int i = 0; i < 3; i++){
        printf("저자: %s\n", book[i].writer);
        printf("제목: %s\n", book[i].title);
        printf("페이지 수: %d\n", book[i].page);
    }
    return 0;
}