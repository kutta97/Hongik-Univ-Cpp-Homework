// 금속조형디자인과 2학년
// B743014 양혜진

#include <iostream>
using namespace std;

class Person {
    private :
        string name;
        int height;
        int weight;
    
    public : 
        Person(string a, int b, int c) { name = a; height = b; weight = c; }
        ~Person() { cout << name << " died." << endl; }
        void Print() {  cout << name << " is " << height << "cm tall and weighs " << weight << "kg." << endl; }
        void Change(int a, int b) { height = a; weight = b; }
};

int main(void) {
    Person P1("Kim Byung-Gi", 180, 70);
    Person P2("Park Hye-Young", 160, 50);

    P1.Print();
    P2.Print();
    P1.Change(185, 75);
    P1.Print();
    
    return 0;
}