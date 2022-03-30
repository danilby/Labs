#include <iostream>

class Complex {
private:
    int _r;
    int _m;

    void add_R(int a) { _r += a; }
    void add_M(int b) { _m += b; }

public:
    Complex() :_r(0), _m(0) {}
    Complex(int r, int m) :_r(r), _m(m) {}

    void set_R(int r) { _r = r; }
    void set_M(int m) { _m = m; }

    void Sum(const Complex& other) { add_R(other._r), add_M(other._m); }
    void PrintValue() { std::cout << "z1 + z2 = " << _r << " + " << _m << "i" << std::endl; }
};

int main()
{
    Complex c1(1, 3);
    Complex c2;
    c2.set_R(4);
    c2.set_M(-5);
    
    c1.Sum(c2);
    c1.PrintValue();
}
