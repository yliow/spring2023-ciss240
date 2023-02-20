#include <iostream>

int main()
{
    int x0, x1, x2, x3;
    std::cin >> x0 >> x1 >> x2 >> x3;

    int t; // for the swaps
    
    std::cout << "PASS 1\n";
    if (x1 < x0)
    {
        t = x0; x0 = x1; x1 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << '\n';
    if (x2 < x1)
    {
        t = x1; x1 = x2; x2 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << '\n';
    if (x3 < x2)
    {
        t = x2; x2 = x3; x3 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << '\n';

    std::cout << "PASS 1\n";
    if (x1 < x0)
    {
        t = x0; x0 = x1; x1 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << '\n';
    if (x2 < x1)
    {
        t = x1; x1 = x2; x2 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << '\n';

    return 0;
}
