// 금속조형디자인과 2학년
// B743014 양혜진

#include <stdio.h>
void func() {
	int cnt1 = 0;
	static int cnt2 = 0;
	cnt1++; printf("cnt1 = %d: ", cnt1);
	cnt2++; printf("cnt2 = %d\n", cnt2);
}
int main(void) {
	// func 함수 3차례 호출
	func();
	func();
	func();
}

/*
 * 동작 결과
 * cnt1 = 1: cnt2 = 1
 * cnt1 = 1: cnt2 = 2
 * cnt1 = 1: cnt2 = 3
 *
 * hw1a의 동작 결과, cnt1 은 계속해서 1이 출력됩니다.
 * 반면, cnt2 는 이전의 값에 ++ 연산자거 적용된 값이 출력됩니다.
 * 
 * cnt1 과 cnt2 의 값이 다르게 출력되는 이유
 * cnt1 은 func() 함수 내에서 매번 호출할때마다 초기화되는 지역변수이고,
 * cnt2 는 프로그램의 시작과 동시에 할당 및 초기화 되어 프로그램이 종료될 때까지 메모리 공간에 존재하는 static 변수이기 때문입니다.
 */
