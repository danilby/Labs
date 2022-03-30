#include <iostream>
const float pi = 3.14;
class Figure {
private:
    double _a;
    double _b;
    double _c;
    double _R;
public:
    Figure(int a = 2, int b = 3, int c = 4, int r = 5) : _a(a), _b(b), _c(c),_R(r) {}
    double CalculateCircle() {
        return pi * _R * _R;
    }
    double CalculateTriangle() {
        double p = (_a + _b + _c) / 2;
        return sqrt(p * (p - _a) * (p - _b) *(p - _c));
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
    Figure f;
    std::cout << "Circle: " << f.CalculateCircle() << std::endl;
    std::cout << "Triangle: " << f.CalculateTriangle() << std::endl;
}