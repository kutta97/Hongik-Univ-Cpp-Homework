// 금속조형디자인과 2학년
// B743014 양혜진

#include <iostream>
using namespace std;

class CPoint {
    private :
        int x;
        int y;
    
    public :
        CPoint(int a, int b) { x = a; y = b; cout << "constructor1:"; Print(); }
        CPoint(int a) { x = a; y = 0; cout << "constructor2:"; Print(); }
        ~CPoint() { cout << "destructor:"; Print(); }
        void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main(void)
{
    CPoint P1(3, 4);
    CPoint P2(5);
    CPoint P3 = 6;

    P1.Print();
    P2.Print();
    P3.Print();

    return 0;
}

/* 
 * 출력 결과
 * constructor1:(3, 4)
 * constructor2:(5, 0)
 * constructor2:(6, 0)
 * (3, 4)
 * (5, 0)
 * (6, 0)
 * destructor:(6, 0)
 * destructor:(5, 0)
 * destructor:(3, 4)
 * 
 * CPoint class 에서 counstructor 가 2 개가 가능한 이유
 * constructor 는 함수이기 때문에 overloading 이 가능하기 때문이다.
 */