
#include <iostream>
class Sum {
    int _x;
    int _y;
    int _s;
public:
    Sum() :_x{ 0 }, _y{ 0 }, _s{ 0 } {}
    Sum(int x, int y) { _x = x, _y = y; _s = 0; }

    void set_x(int x) { _x = x; }
    void set_y(int y) { _y = y; }

    int get_s() { set_s(); return _s; }

    void show() { std::cout << "x = " << _x << "   y = " << _y << std::endl; }
private:
    void set_s() { _s = _x + _y; }
};
int main()
{
    Sum ob{ 5, 6 };
    std::cout << "Sum ob: " << std::endl;
    ob.show();
    std::cout << "sum = " << ob.get_s() << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << "Sum *p: " << std::endl;
    Sum* p = new Sum;
    p->set_x(15);
    p->set_y(20);
    p->show();
    std::cout << "sum = " << p->get_s() << std::endl;
    delete p;
    std::cout << "-----------------------" << std::endl;
    p = &ob;
    p->show();
    std::cout << "sum = " << p->get_s() << std::endl;
}