#include <iostream>

class Timer {
    int _sec;
public:
    Timer(int sec) :_sec{ sec } {}
    Timer(int min, int sec) : _sec(sec) { _sec += min * 60; }
    Timer(const Timer& other) { this->_sec = other._sec; }
    int get_Sec() { return _sec; }
};

int main()
{
    Timer time1(45);
    std::cout << "Sec = " << time1.get_Sec() << std::endl;
    Timer time2(5, 23);
    std::cout << "Sec = " << time2.get_Sec() << std::endl;
    Timer time3(time1);
    std::cout << "Sec = " << time3.get_Sec() << std::endl;
}