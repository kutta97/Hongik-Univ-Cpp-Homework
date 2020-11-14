// 금속조형디자인과 2학년
// B743014 양혜진

#ifndef _SHAPEH
#define _SHAPEH

class CShape {
	protected:
		float x, y;	// 중심점
	public:
		CShape(float a, float b) : x(a), y(b) {}
		void Move(float, float);
		virtual void Print();
};

class CCircle : public CShape {
	private:
		float Radius;
	public:
		CCircle(float a, float b, float r) : CShape(a, b), Radius(r) {}
		void Print();
};

class CRect : public CShape {	// 직사각형
	private:
		float Garo, Sero;	// 가로와 세로
	public:
		CRect(float a, float b, float ga, float se)
			: CShape(a, b), Garo(ga), Sero(se) {}
		void Print();
};
#endif