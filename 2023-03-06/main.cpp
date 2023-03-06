#include <iostream>
#include <iomanip>

int main()
{
    // int s = 0;
    // int i = 0;
    
    // s = s + i;
    // std::cout << s << '\n';
    // ++i;
    
    // s = s + i;
    // std::cout << s << '\n';
    // ++i;

    // s = s + i;
    // std::cout << s << '\n';
    // ++i;
    
    // s = s + i;
    // std::cout << s << '\n';
    // ++i;

    // s = s + i;
    // std::cout << s << '\n';
    // ++i;
    
    // s = s + i;
    // std::cout << s << '\n';
    // ++i;
    
    // int s = 0;
    // for (int i = 0; i <= 5; ++i)
    // {
    //     s += i;
    //     std::cout << i << ' ' << s << '\n';
    // }

    // sum of squares
    // int s = 0;
    // for (int i = 0; i <= 5; ++i)
    // {
    //     s += i * i;
    //     std::cout << i << ' ' << s << '\n';
    // }

    // double s = 0.0;
    // for (int i = 1; i <= 1000000; ++i)
    // {
    //     s += 1.0 / (i * i);
    //     std::cout << i << ' ' << std::setprecision(20) << s << '\n';
    // }

    long long int p = 1;
    for (int i = 1; i <= 30; ++i)
    {
        p *= i;
        std::cout << i << ' ' << p << '\n';
    }
    
    return 0;
}
