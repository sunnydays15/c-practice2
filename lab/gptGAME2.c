#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 현재 시간을 가져와 시드 값으로 사용
    unsigned int seed = (unsigned int)time(NULL);

    // 시드 값을 출력
    printf("Seed: %u\n", seed);

    // 시드 값을 설정하여 난수 생성기 초기화
    srand(seed);

    // 예시로 난수를 생성하여 출력
    for (int i = 0; i < 5; i++) {
        printf("Random number %d: %d\n", i + 1, rand()%101);
    }

    return 0;
}
