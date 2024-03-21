/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);

    if( (100>=score) && (score>=90) ){
        printf("A\n");
    }else if((90>score) && (score>=80)){
        printf("B\n");
    }else if((80>score) && (score>=70)){
        printf("C\n");
    }else if((70>score) && (score>=60)){
        printf("D\n");
    }else if((60>score) && (score>=0)){
        printf("F\n");
    }

    return 0;
}