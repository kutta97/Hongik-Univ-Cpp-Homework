// 금속조형디자인과 2학년
// B743014 양혜진

#include <iostream>
using namespace std;

void update(int var1, int &var2)
{
    var1 += var1;
    var2 += var2;
}

int main(void)
{
    int a = 1, b = 1;

    for (int i = 0; i < 5; i++)
        update(a, b);
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

/*
 * 동작 결과
 * a = 1
 * b = 32
 * 
 * 동작결과의 이유
 * 변수 a는 함수 update 의 파라미터에 값으로 전달되었고,
 * 변수 b는 함수 update 의 파라미터에 참조를 통해 전달되었기 때문이다.
 * 
 * 값에 의한 전달(Pass by Value)은 함수 내의 매개변수의 값으로 복사된다.
 * 그래서 update 함수내에서 연산의 결과는 upate 함수 안의 로컬변수 var1에만 적용되고,
 * 변수 a 에는 저장되지 않는다.
 * 
 * 참조에 의한 전달(Pass by Reference)은 참조한 변수 자체와 똑같이 취급된다.
 * 그래서 update 함수안의 로컬변수 var2 는 변수 b와 똑같기 떄문에
 * 함수 내에서 var2의 += 연산 결과가 변수 b에 그대로 저장되었다.
 * 
 */