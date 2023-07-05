/*
파일명: ex02-02-variable-type.c

C언어 기본 자료형 종류
    -문자
        char            1바이트 -128 ~ +127
    -정수
        short           2바이트 -32,768 ~ +32,767
        int             4바이트 -2,147,483,648, ~ +2,147,483,647 *기억하기
        long            4바이트 -2,147,483,648, ~ +2,147,483,647
        long long       8바이트
    -실수
        float           4바이트 ±3.4×10^-37 ~ ±3.4×10^+38
        double          8바이트 ±1.7×1-^-307 ~ ±1.7×1-^+308
        long double     8바이트 이상의 표현범위
*/

#include <stdio.h>

int main(void)
{
    // 정의되어 있지 않은 값을 처리할때 컴파일러는
    // 가장 빠르고 정확하게 표현할 수 있는 자료형을 선택 처리.
    printf("size(100): %d\n", sizeof(100));
    printf("size(3.14): %d\n", sizeof(3.14));

    char ch1 = 66, ch2 = 'B'; // 66 = B
    short sh1 = 67; // 67 = C
    int in1 = 68; // 68 = D

    printf("%c\n", ch1); // %c 는 문자값으로 바꿔줌
    printf("%c\n", ch2);
    printf("%c\n", sh1);
    printf("%c\n", in1);


    return 0;
}