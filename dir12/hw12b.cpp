// 금속조형디자인과 2학년
// B743014 양혜진

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class CPoint {
    private :
        int x, y;
    
    public :
        CPoint(int a = 0, int b = 0) : x(a), y(b) {}
        friend ostream &operator<<(ostream &out, CPoint &Po);
        friend bool Compare(const CPoint &Po1, const CPoint &Po2);
};

ostream &operator<<(ostream &out, CPoint &Po)
{
    out << "(" << Po.x << ", " << Po.y << ")";
    return out;
}

bool Compare(const CPoint &Po1, const CPoint &Po2)
{
    if (Po1.y < Po2.y)
        return true;
    else if (Po1.y == Po2.y)
        return Po1.x < Po2.x;
    else
        return false;
}

void PrintVector(vector<CPoint> intV, char *name)
{
    vector<CPoint>::iterator iter;

    cout << ">> " << name << " : ";
    for (iter = intV.begin(); iter != intV.end(); iter++)
        cout << *iter << " ";
    cout << endl;
}

int main(void)
{
    vector<CPoint> intV(5);

    intV[0] = CPoint(5, 3);
    intV[1] = CPoint(2, 9);
    intV[2] = CPoint(1, 1);
    intV[3] = CPoint(2, 5);
    intV[4] = CPoint(3, 7);
    PrintVector(intV, (char *) "정렬 전");

    sort(intV.begin(), intV.end(), Compare);
    PrintVector(intV, (char *) "정렬 후");

    return 0;
}