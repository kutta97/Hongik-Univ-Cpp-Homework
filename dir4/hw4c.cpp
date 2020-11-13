// 금속조형디자인과 2학년
// B743014 양혜진

#include <iostream>
using namespace std;

int &GetArray(int *ary, int index)
{
	return ary[index];
}

void SumMul(int *ary, int num, int &s, int &m)
// 합과 곱을 저장하는 s와 m을 3,4째 인수로 위에 추가하라
{
	s = 0; m = 1;
	// 배열의 성분들의 합과 곱을 계산하여 그 값을 
	//3째 인수 s와 4째 인수 m으로 반환하는 함수를 작성하라

    for (int i = 0; i < num; i++) {
        s += ary[i];
        m *= ary[i];
    }
        
}

int main(void)
{
	int ary[5];
	int sum, mul;

	for (int i = 0; i < 5; i++)
		GetArray(ary, i) = i + 1; // ary[i] = i + 1; 과 동일
	// 배열의 성분들의 합과 곱을 sum과 mul로 얻는다
	SumMul(ary, 5, sum, mul);
	
	cout << "합 : " << sum << "; 곱 : " << mul << endl;
	return 0;
}