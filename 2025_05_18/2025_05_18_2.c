// 표준 입출력 함수를 쓰겠다 선언
#include <stdio.h>

// 모든 시작은 main() 함수 프로그램 시작점
int main(int argc, char* argv[])
{
   // 포인터
   int x = 10;
   int *p = &x; // P는 x의 주소로 지정
   printf("%d\n", *p);
}

