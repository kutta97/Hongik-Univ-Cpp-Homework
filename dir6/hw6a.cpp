// 금속조형디자인과 2학년
// B743014 양혜진

#include <iostream>
using namespace std;

class CPoint {
    private :
        int x, y;
        static int count;
    
    public :
        CPoint(int a = 0, int b = 0) : x(a), y(b) { count++; }
        ~CPoint() { count--; }
        void Print() { cout << "(" << x << ", " << y << ")" << endl; }
        static int GetCount() { return count; }
};

int CPoint::count = 0;

int main(void)
{
    CPoint P1(1, 2);
    CPoint *P2 = new CPoint(3, 4);

    cout << "count : " << CPoint::GetCount() << endl;
    delete P2;
    cout << "count : " << P1.GetCount() << endl;

    return 0;
}

/**
 * CPoint::GetCount() 와 같은 결과가 나오도록 하는 
 * 객체를 이용한 다른 호출 방법 2가지
 * 
 * 1. P1.GetCount()
 * 2. P2->GetCount()
*/