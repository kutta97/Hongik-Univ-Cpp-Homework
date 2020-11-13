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
void addfront(int val)
{
	// 새 Node를 만들고 data 필드에 val 을 저장하여 리스트 앞에 추가
	struct Node *Current;	// 노드 생성
	Current = (struct Node *) malloc(sizeof(struct Node));
	Current->data = val;

	if(pStart == NULL) {	// 첫 번째 노드
		Current->next = NULL;
		pStart = pEnd = Current;
	}		
	else {
		Current->next = pStart;	// 노드 추가
		pStart = Current;
	}
}
void delete(int val) 
{
	// data 필드값이 val 인 Node 를 1 개 찾아 지운다.
	if (pStart == NULL) 
		return;
	else if (pStart->data == val) {
		struct Node *Current = pStart;
		pStart = pStart->next;
		free(Current);
	}else {
		struct Node *p = pStart;
		struct Node *q = p->next;
		while(q != NULL) {
			if (q->data == val) {
				p->next = q->next;
				free(q);
				break;
			}
			p = q;
			q = p->next;
		}
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
		addfront(i);	// 새 노드를 만들어 리스트 앞에 추가
	delete(2);			// 특정 값을 갖는 노드를 제거한다
	delete(5);			// 맨 앞이나 맨 뒤의 노드도 제거할 수 있어야 함
	printlist(pStart);
	return 0;
}

