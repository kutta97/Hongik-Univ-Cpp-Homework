// 금속조형디자인과 2학년
// B743014 양혜진

#include <iostream>
using namespace std;

int **make2darray(int r, int c)
{
    int **p;
    int i, j;
    p = new int *[r];

    for (i = 0; i < r; i++)
        p[i] = new int[c];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            p[i][j] = i + j;
        }
    }

    return p;
}

void print2darray(int r, int c, int **p)
{
    int i, j;

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << p[i][j] << "\t";
        }
        cout << endl;
    }
}

void delete2darray(int r, int **p)
{
    int i, j;

    for (i = 0; i < r; i++)
        delete [] p[i];
    delete [] p;
}

int main(void)
{
    int **p;
    p = make2darray(4, 5);
    print2darray(4, 5, p);
    delete2darray(4, p);   
            
    return 0;
}