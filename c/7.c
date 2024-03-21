/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
     int year, month, days;
    scanf("%d %d", &year, &month);

    switch (month) {
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 2:
            days = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 29 : 28;
            break;
        default:
            days = 31;
            break;
    }

   printf("%d\n", days);

    return 0;
}