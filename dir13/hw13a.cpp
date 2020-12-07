// 금속조형디자인과 2학년
// B743014 양혜진

#include <iostream>
using namespace std;

class CMyException {
public : 
    virtual void What() = 0;
};

class CDivideZero : public CMyException {
public : 
    void What() { cout << "0으로 나눌 수 없습니다." << endl; }
};

class CNegativeNumber : public CMyException {
public :
    void What() { cout << "피연산자는 음수가 될 수 없습니다." << endl; }
};

void Process(int x, int y) {
    if (y == 0) throw CDivideZero();
    if (x <= 0 || y <= 0) throw CNegativeNumber();
    cout << "합:" << x+y << " 차:" << x-y <<" 곱:"
        << x*y << " 몫:" << x/y << endl;
}

int main(void) {

    int x, y;
    
    cout << "2개의 정수 입력: ";
    while (cin >> x >> y) {
        try {
            Process(x, y);
        }
        catch (CMyException &a) {
            a.What();
        }
        catch (...) {
            cout << "모든 throw문을 수용할 수 있는 예외처리 핸들러입니다."
                << endl;
        }
        cout << endl << "2개의 정수 입력: ";
    }
    cout << endl;
    return 0;
}
