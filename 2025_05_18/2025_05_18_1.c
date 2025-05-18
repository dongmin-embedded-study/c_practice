// 표준 입출력 함수를 쓰겠다 선언
#include <stdio.h>

// 모든 시작은 main() 함수 프로그램 시작점
int main(int argc, char* argv[])
{
    printf("Hello World");

    int age = 20;
    float height = 175.5;
    char initial = 'D';

    int num;
    printf("숫자하나 아무거나 입력하세요 \n");
    scanf("%d", &num); // &num: num 변수의 주소
    printf("입력한 숫자는 %d 입니다.", num);

    // return 0 (아무 리턴도 없음) 을 던져줘 정상 종료
    return 0;
}

