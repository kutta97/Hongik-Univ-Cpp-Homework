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

class CCylinder : public CCircle {
    private :
        int z;
        double Height;
    
    public :
        CCylinder(int a, int b, int c, double r, double h) : CCircle(a, b, r), z(c), Height(h) {
            cout << "CCylinder 생성자" << endl; }
        ~CCylinder() { cout << "CCylinder 소멸자" << endl; }
        double GetArea() { return ((2 * PI * Radius * Radius) + (2 * PI * Radius * Height)); }
        double GetVolume() { return (PI * Radius * Radius * Height); }    
};

int main(void) {
    CCylinder Cyl(1, 1, 1, 1.0, 10.0);

    cout << "밑면적=" << Cyl.CCircle::GetArea() << endl;// 밑면적
    cout << "표면적=" << Cyl.GetArea() << endl;         // 실린더의 표면적
    cout << "부피=" << Cyl.GetVolume() << endl;         // 실린더의 부피

    return 0;
}