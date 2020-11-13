// 금속조형디자인과 2학년
// B743014 양혜진

#include <stdio.h>
void swap(int x, int y) { int temp = x; x = y; y = temp; }
int main(void)
{
	int a = 2; int b = 3;
	swap(a, b); printf("a : %d, b : %d\n", a, b);
}

/*
 * hw1b 와 hw1c 의 동작결과가 다른 이유
 * hw1b 의 경우 swap 함수에 a 와 b 의 값을 call by value, 즉 값에 의한 전달로 처리했고,
 * hw1c 의 경우 swap 함수에 a 와 b 의 주소를 전달함으로써 call by reference, 즉 참조에 의한 전달로 처리했기 때문이다.
 * 사실 엄밀히 따지자면 hw1c 의 경우, a 와 b 의 주소값을 복사하여 전달하는 것이므로 "값에 의한 전달"이라고 볼 수 있다.
 */
