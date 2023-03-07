#include <iostream>
#include <cmath>
int main()
{
    double a, b;  // area from x = a to x = b
    int n;        // number of rectangles used
    std::cin >> a >> b >> n;
    
    double s = 0.0;
    double dx = (b - a) / n;
    for (double x = a; x < b; x += dx)
    {
        double term = pow(x, 72.3) / (3 * sin(2 * x + 1) + 1000)  * dx;
        s += term;
        std::cout << x << ' ' << s << '\n';
    }

    std::cout << s << '\n';
    return 0;
}
