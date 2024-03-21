/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int num, rvsNum = 0;
    scanf("%d", &num);
    
    rvsNum += (num % 10) * 100;
    num /= 10;
    rvsNum += (num % 10) * 10;
    num /= 10;
    rvsNum += num;

    printf("%d\n", rvsNum);

    return 0;
}