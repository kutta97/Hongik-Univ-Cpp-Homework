// 금속조형디자인과 2학년
// B743014 양혜진

#include <iostream>
using namespace std;

class Complex {
    public:
        Complex(float r=0.0, float i=0.0) : re(r), im(i) {}
        Complex operator+(Complex& right) {
            Complex tmp;
            tmp.re = re + right.re; tmp.im = im + right.im;
            return tmp;
        }
        Complex operator-() { 
            Complex tmp;
            tmp.re = -re; tmp.im = -im;
            return tmp;
        }
    private:
        float re, im;
        friend ostream& operator<<(ostream&, const Complex&);
};

ostream& operator<<(ostream& out, const Complex& c) {
    if ( c.im < 0 ) {
        out << c.re << " - " << -c.im << "i\n";
    }else {
        out << c.re << " + " << c.im << "i\n";
    }
    return out;
}

int main(void) {
    Complex com1(1.0, 2.0), com2(3.0, 4.0);
    Complex com3 = com1 + com2; Complex com4 = -com1;
    cout << com1 << com2 << com3 << com4;
}