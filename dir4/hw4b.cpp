// 금속조형디자인과 2학년
// B743014 양혜진

#include <iostream>
using namespace std;

int &GetArray(int *ary, int index)
{
    return ary[index];
}

int main(void)
{
    int i;
    int ary[5];

    for (i = 0; i < 5; i++)
        GetArray(ary, i) = i;
    
    for (i = 0; i < 5; i++)
        cout << "ary[" << i << "] " << GetArray(ary, i) << endl;
    
    return 0;
}

/*
 * 동작 결과
 * ary[0] 0
 * ary[1] 1
 * ary[2] 2
 * ary[3] 3
 * ary[4] 4
 * 
 * 동작결과의 이유
 * GetArray 함수는 int 형 array의 원소 자체를 반환한다(참조의 반환).
 * 그래서 main 함수의 첫 번째 for문에서 GetArray 의 반환 값에 i의 대입이 가능하다.
 * 즉, 18라인은 ary[i] = i; 와 같은 의미이다.
 * 그래서 21라인에서 GetArray 값을 출력할때, 첫 번째 for문에서 대입한
 * 배열의 원소 값이 출력되는 것이다.
 * 
 * 만약 GetArray 함수 선언에서 첫 줄의 int &GetArray를 int GetArray로 바꾸면
 * 18라인이 문제가 된다.
 * 왜냐하면, GetArray의 리턴값은 ary[index]의 value 자체가 되는데
 * 변수가 아닌 value 자체에 어떤 다른 값을 대입할 수 없기 때문이다.
 * 
 */