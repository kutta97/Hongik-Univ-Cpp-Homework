// 금속조형디자인과 2학년
// B743014 양혜진

#include <iostream>
using namespace std;

class Complex {
    private : 
        float r, i; // r : real part(실수부), i : imaginary part(허수부)
        static int count;

    public : 
        Complex(float a = 0, float b = 0) : r(a), i(b) { count++; }
        ~Complex() { count--; }
        Complex Add(Complex &c) { return Complex((r + c.r), (i + c.i)); }
        Complex Mul(Complex &c) { return Complex((r*c.r - i*c.i), (i*c.r + r*c.i)); }
        void Print() { cout << "(" << r << ", " << i << ")"; }
        static int GetCount() { return count; }
};

int Complex::count = 0;

int main(void) {
    Complex com1(1.0, 2.0), com2(3.0, 4.0); // 복소수 1 + 2i 와 3 + 4i
	Complex com3; // 복소수 0 + 0i 로 초기화

	com1.Print(); cout << endl;
	com2.Print(); cout << endl;
	com3 = com1.Add(com2); com3.Print(); cout << endl;

	Complex *pcom4 = new Complex;
	*pcom4 = com1.Mul(com2); pcom4->Print(); cout << endl;
	cout << "#complex numbers = " << com1.GetCount() << endl;
	delete pcom4;
	cout << "#complex numbers = " << com1.GetCount() << endl;
}