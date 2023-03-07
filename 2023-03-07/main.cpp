#include <iostream>
#include <cmath>

int main()
{
    // double a, b;  // area from x = a to x = b
    // int n;        // number of rectangles used
    // std::cin >> a >> b >> n;
    
    // double s = 0.0;
    // double dx = (b - a) / n;
    // for (double x = a; x < b; x += dx)
    // {
    //     double term = pow(x, 72.3) / (3 * sin(2 * x + 1) + 1000)  * dx;
    //     s += term;
    //     std::cout << x << ' ' << s << '\n';
    // }

    // std::cout << s << '\n';


    // max example
    double a, b;
    int n;
    std::cin >> a >> b >> n;
    double dx = (b - a) / (n - 1);

    double max_y = (1/a) * sin(a);
    double max_x = a;
    
    for (double x = a + dx; x <= b; x += dx)
    {
        double y = (1.0 / x) * sin(x);
        if (y > max_y)
        {
            max_y = y;
            max_x = x;
        }
        std::cout << x << ' ' << max_x << ' ' << max_y << '\n';
    }

    std::cout << "FINAL ... " << ' ' << max_x << ' ' << max_y << '\n';

    return 0;
}
