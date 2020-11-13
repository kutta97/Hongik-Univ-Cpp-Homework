// 금속조형디자인과 2학년
// B743014 양혜진

#include <iostream>
using namespace std;

#define PI 3.14

class CCircle {
    protected :
        int x, y;           // 중심
        double Radius;      // 반지름
    
    public :
        CCircle(int a, int b, double r) : x(a), y(b), Radius(r) {
            cout << "CCircle 생성자" << endl; }
        ~CCircle() { cout << "CCircle 소멸자" << endl; }
        double GetArea() { return (PI * Radius * Radius); }
};

class CSphere : public CCircle {
    private :
        int z;
    
    public :
        CSphere(int a, int b, int c, double r) : CCircle(a, b, r), z(c) {
            cout << "CSphere 생성자" << endl; }
        ~CSphere() { cout << "CSphere 소멸자" << endl; }
        double GetArea() { return (4 * PI * Radius * Radius); }
        double GetVolume() { return ((4.0/3.0) * PI * Radius * Radius * Radius); }    
};

int main(void) {
    CSphere Sph(1, 1, 1, 1.0);

    cout << "단면적=" << Sph.CCircle::GetArea() << endl;// (줄1)단면적
    cout << "표면적=" << Sph.GetArea() << endl;         // (줄2)표면적
    cout << "부피=" << Sph.GetVolume() << endl;         // (줄3)부피

    return 0;
}