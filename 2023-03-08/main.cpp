#include <iostream>
#include <cmath>

int main()
{
    /*
    double a, b;
    int n;
    std::cin >> a >> b >> n;

    double dx = (b - a) / (n - 1);
    double min_y;
    double root;

    min_y = fabs(sin(a));
    root = a;
    
    for (double x = a + dx; x <= b; x += dx)
    {
        double y = fabs(sin(x));
        if (y < min_y)
        {
            min_y = y;
            root = x;
        }
        std::cout << x << ' ' << y << ' ' << root << ' ' << min_y << '\n';
    }

    std::cout << "FINAL:" << root << ' ' << min_y << '\n';

    */

    // int x, i;
    // std::cin >> x >> i;
    // int x_i = x / int(pow(10, i)) % 10;
    // std::cout << x_i << '\n';

    int x;
    std::cin >> x;
    for (int i = 9; i >= 0; --i)
    {
        int x_i = x / int(pow(10, i)) % 10;
        std::cout << x_i << ' ';
    }
    std::cout << '\n';
    
    return 0;
}
