/*
파일명: ex16-04-call-by-reference.c

call by reference
    포인터 매개변수, 주소값 전달

*/
#include <stdio.h>

void swapNumber(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

    printf("함수 안에서 확인한 결과, *num1: %d *num2: %d\n", *num1, *num2);
}

int main(void)
{
    int number1 = 33, number2 = 99;
    printf("%p, %p\n", &number1, &number2);

    swapNumber(&number1, &number2);
    printf("함수 호출 완료후 확인한 결과, number1: %d, number2: %d\n", number1, number2);
    
    return 0;

}

// call-by-reference 변수는 주소값을 전달해주기 때문에 call-by-value 변수와 다르게 원래 자료값이 영향을 받음
// scanf에서 주소값을 받는 이유도 같은 이유임