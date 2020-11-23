// 금속조형디자인과 2학년
// B743014 양혜진

#include <iostream>
using namespace std;

template <class T>
class CPoint {
     private :
        T x, y;

    public :
        CPoint(T a, T b) : x(a), y(b) {}
        void Move(T a, T b) { x += a; y += b; }

        template <class T2>
        friend ostream& operator<<(ostream&, CPoint<T2>);
};

template <class T>
ostream& operator<<(ostream& os, CPoint<T> pt)
{
    os << "(" << pt.x << ", " << pt.y << ")" << endl;
}

int main(void)
{
    CPoint<int> P1(1, 2);
    CPoint<double> P2(1.1, 2.2);

    cout << P1 << P2;

    return 0;
}