// 금속조형디자인과 2학년
// B743014 양혜진

#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

Point **make2darray(int r, int c)
{
    Point **p;  // 2차원 array 의 이름을 p 라 하자
    int i, j;
    p = new Point *[r];

    for (i = 0; i < r; i++)
        p[i] = new Point [c];

     for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            p[i][j].x = i + j;
            p[i][j].y = (p[i][j].x) * 2;
        }
    }

    return p;
}

void print2darray(int r, int c, Point **p)
{
    int i, j;

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << "(" << p[i][j].x << ", " << p[i][j].y << ")" << "\t";
        }
        cout << endl;
    }
}

void delete2darray(int r, Point **p)
{
    int i;

    for (i = 0; i < r; i++)
        delete [] p[i];
    delete [] p;
}

int main(void)
{
    Point **p;
    p = make2darray(4, 5);
    print2darray(4, 5, p);
    delete2darray(4, p);

    return 0;
}