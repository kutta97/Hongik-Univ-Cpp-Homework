// 금속조형디자인과 2학년
// B743014 양혜진

#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};
struct Node *pStart = NULL;	// 리스트의 첫 노드의 포인터
struct Node *pEnd = NULL;	// 리스트의 마지막 노드의 포인터
void addrear(int val)
{
	// 새 Node를 만들고 data 필드에 val 을 저장하여 pStart 로 시작하는
	// 리스트 뒤에 추가한다.
	struct Node *Current;
	// 노드 생성
	Current = (struct Node *) malloc(sizeof(struct Node));
	Current->data = val;
	Current->next = NULL;

	if(pStart == NULL)		// 첫 번째 노드
		pStart = pEnd = Current;
	else {
		pEnd->next = Current;	// 노드 추가
		pEnd = Current;
	}
}
void printlist(struct Node *Current)
{
	// Current 가 가리키는 리스트를 출력한다.
	Current = pStart;
	while (Current != NULL) {
		printf("%d\n", Current->data);
		Current = Current->next;
	}
}

int main(void)
{
	int i;
	for (i = 1; i <= 5; i++) 
		addrear(i);	// 새 노드를 만들어 리스트 뒤에 i를 추가
	printlist(pStart);
	return 0;
}

/* 동작시킨 결과
 * 1
 * 2
 * 3
 * 4
 * 5
 */