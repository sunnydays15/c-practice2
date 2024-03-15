#include <stdio.h>
#include <string.h>

int main() {
    char lines[5][16]; // 5줄, 한 줄 최대 15글자 + 널 문자('\0')
    int i, j, maxLength = 0;

    // 입력 받기
    for (i = 0; i < 5; i++) {
        scanf("%s", lines[i]);
        int length = strlen(lines[i]);
        if (length > maxLength) {
            maxLength = length;
        }
    }

    // 세로로 출력
    int ban = 0;
    for (i = 0; i < maxLength; i++){
        for(j = ban; j < 5; j++){
            if (lines[j][i] != '\0') {
                printf("%c", lines[j][i]);
            }
            else ban++;
        }
    }

    return 0;
}