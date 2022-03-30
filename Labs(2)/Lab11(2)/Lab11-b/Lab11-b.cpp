#include <iostream>
const float pi = 3.14;
class Figure {
private:
    double _a;
    double _b;
    double _c;
public:
    Figure(int a = 0, int b = 5, int c = 0) : _a(a), _b(b), _c(c) {}
    double Calculate() {
        if (_a == 0 && _b == 0)
            return _c * _c * pi;
        else if (_a == 0 && _c == 0)
            return _b * _b * pi;
        else if (_b == 0 && _c == 0)
            return _a * _a * pi;
        double p = (_a + _b + _c) / 2;
        return sqrt(p * (p - _a) * (p - _b) * (p - _c));
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
    Figure f;
    std::cout << "Figure: " << f.Calculate() << std::endl;
}