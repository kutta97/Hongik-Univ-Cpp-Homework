// 금속조형디자인과 2학년
// B743014 양혜진

#include <iostream>
using namespace std;

class CMyException {
public : 
    void What() { cout << "인수가 이상해" << endl; }
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


/*
 * hw13b 는 CMyException 의 What 함수에서 virtual 키워드를 생략했기 때문에
 * Exception 이 발생할 시 Base Class 인 CMyException 의 What 함수가 호출된다.
 * 그렇기 때문에 어떤 Exception 이 발생했는지 알 수 없다.
 * 
 * hw13a 가 hw13b보다 좋다.
 * Base Class 의 What() 함수를 virtual 함수로 만들어서
 * Exception 이 발생할 때마다 어떤 Exception 의 객체인지 확인하고
 * 해당 Exception 의 What() 함수를 호출할 수 있기 때문이다.
 */