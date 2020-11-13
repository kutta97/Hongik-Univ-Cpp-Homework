// 금속조형디자인과 2학년
// B743014 양혜진

#include <iostream>
using namespace std;

class Complex {
    public:
        Complex(float r=0.0, float i=0.0): re(r), im(i) {}
        Complex operator+(Complex &right) {
            Complex tmp;
            tmp.re = re + right.re;
            tmp.im = im + right.im;
            return tmp;
        }
        void Print() { cout << re << " + " << im << "i\n"; }
    private:
        float re, im;
};

int main() {
    Complex com1(1.0, 2.0), com2(3.0, 4.0);
    Complex com3;

    com1.Print(); com2.Print();
    com3 = com1 + com2; com3.Print();
}