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
        Complex operator-(Complex &right) {
            Complex tmp;
            tmp.re = re - right.re;
            tmp.im = im - right.im;
            return tmp;
        }
        Complex operator*(Complex &right) {
            Complex tmp;
            tmp.re = (re * right.re) - (im * right.im);
            tmp.im = (im * right.re) + (re * right.im);
            return tmp;
        }
        Complex operator/(Complex &right) {
            Complex tmp;
            tmp.re = ((re * right.re) + (im * right.im)) / ((right.re) * (right.re) + (right.im) * (right.im));
            tmp.im = ((im * right.re) - (re * right.im)) / ((right.re) * (right.re) + (right.im) * (right.im));
            return tmp;
        }
        void Print() { 
            if ( im < 0 ) {
                cout << re << " - " << -im << "i\n"; 
            }else {
                cout << re << " + " << im << "i\n"; 
            }
        }
    private:
        float re, im;
};

int main() {
    Complex com1(1.0, 2.0), com2(3.0, 4.0);
    Complex com3, com4, com5, com6;

    com1.Print(); com2.Print();

    com3 = com1 + com2; com3.Print();
    com4 = com1 - com2; com4.Print();
    com5 = com1 * com2; com5.Print();
    com6 = com1 / com2; com6.Print();
}