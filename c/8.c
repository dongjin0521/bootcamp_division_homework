/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


int main() {
    int num, sum, fact = 0;

    scanf("%d", &num);

    sum = (num * (num + 1)) / 2;

    fact = factorial(num);
    
    printf("%d\n", sum);
    printf("%d\n", fact);
    return 0;
}