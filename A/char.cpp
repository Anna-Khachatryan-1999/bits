#include <iostream>
extern int ay;

int main()
{
    int16_t x = 3;
    auto ac = alignof(int);
    const int y = 1;
    //alignas(y) char a[9];
    volatile int t;
    char a[9];
    a[0] = 'a';
    a[1] = '9';
    //t = 0;
    std::cout << ac << std::endl;
    std::cout << a[2] << std::endl;
    std::cout << t << std::endl;
    //int f{0.1}; //narrowing
    double f1{0};
    constexpr int max = 1024*1024;
    auto fwt = 3;
}
