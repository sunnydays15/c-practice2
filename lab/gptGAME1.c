#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIGITS 3 // 3자리 숫자로 설정

// 랜덤한 3자리 숫자 생성
void generateRandomNumber(int *number) {
    srand(time(NULL));
    number[0] = rand() % 9 + 1; // 첫 자리는 1부터 9까지의 숫자
    number[1] = rand() % 10; // 나머지 두 자리는 0부터 9까지의 숫자
    number[2] = rand() % 10;
}

// 사용자 입력 받기
void getUserInput(int *guess) {
    printf("Guess the 3-digit number: ");
    scanf("%1d%1d%1d", &guess[0], &guess[1], &guess[2]); // 한 자리씩 입력받기
}

// 스트라이크, 볼 계산
void calculateScore(int *answer, int *guess, int *strike, int *ball) {
    *strike = *ball = 0;
    for (int i = 0; i < DIGITS; i++) {
        for (int j = 0; j < DIGITS; j++) {
            if (guess[i] == answer[j]) {
                if (i == j) {
                    (*strike)++;
                } else {
                    (*ball)++;
                }
            }
        }
    }
}

int main() {
    int answer[DIGITS]; // 컴퓨터가 생성한 숫자
    int guess[DIGITS]; // 사용자가 입력한 숫자
    int strike, ball; // 스트라이크, 볼

    generateRandomNumber(answer); // 랜덤한 숫자 생성

    printf("Welcome to the Number Baseball Game!\n");
    printf("Try to guess the 3-digit number.\n");

    do {
        getUserInput(guess); // 사용자 입력 받기
        calculateScore(answer, guess, &strike, &ball); // 스트라이크, 볼 계산

        // 결과 출력
        if (strike == DIGITS) {
            printf("Congratulations! You've guessed the number!\n");
        } else {
            printf("Strike: %d, Ball: %d\n", strike, ball);
        }
    } while (strike < DIGITS);

    return 0;
}
