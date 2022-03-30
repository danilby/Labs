#include <iostream>

class Point {
private:
	int _x;
	int _y;
public:
	Point():_x(0),_y(0) {}
	Point(int x, int y) : _x{ x }, _y{ y } {}
	Point(const Point& other) {
		this->_x = other._x;
		this->_y = other._y;
	}

	void set_x(int x) { _x = x; }
	void set_y(int y) { _y = y; }

	void Method(int& sum, int& mul);
	void show();
};
void Point::Method(int& sum, int& mul) {
	sum = _x + _y;
	mul = _x * _y;
}
void Point::show() {
	std::cout << "x = " << _x << "   y = " << _y << std::endl;
}

int main()
{
	int sum, mul;
	Point p1;
	p1.set_x(12);
	p1.set_y(5);
	p1.Method(sum, mul);
	p1.show();
	std::cout << "sum = " << sum << " mul = " << mul << std::endl << std::endl;
	Point p2(4, 5);
	p2.Method(sum, mul);
	p2.show();
	std::cout << "sum = " << sum << " mul = " << mul << std::endl << std::endl;
	Point p3(p1);
	p3.Method(sum, mul);
	p3.show();
	std::cout << "sum = " << sum << " mul = " << mul << std::endl << std::endl;
}