// 금속조형디자인과 2학년
// B743014 양혜진

#include <iostream>
using namespace std;

template <typename T>
class CPoint {
     private :
        T x, y;

    public :
        CPoint(T a, T b) : x(a), y(b) {}
        void Move(T a, T b) { x += a; y += b; }
        void print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main(void)
{
    CPoint<int> P1(1, 2);
    CPoint<double> P2(1.1, 2.2);

    P1.print();
    P2.print();

    return 0;
}