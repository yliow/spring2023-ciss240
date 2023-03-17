#include <iostream>

int main()
{
    // solve x^3 == 729
    // for (int i = -10; i <= 10; ++i)
    // {
    //     if (i * i * i == 729)
    //     {
    //         std::cout << "solution is " << i << '\n';
    //     }
    // }

    // for (int x = 1; x <= 13; ++x)
    // {
    //     for (int y = x; y <= 13; ++y)
    //     {
    //         if (x <= y && x * x + y * y == 13 * 13)
    //         {
    //             std::cout << "x,y:" << x << ',' << y << '\n';
    //         }
    //     }
    // }

    int A, B, C;
    std::cin >> A >> B >> C;

    for (int a = -100; a <= 100; ++a)
    {
        for (int b = -100; b <= 100; ++b)
        {
            for (int c = -100; c <= 100; ++c)
            {
                for (int d = -100; d <= 100; ++d)
                {
                    if (a * c == A &&
                        a * d + b * c == B &&
                        b * d == C)
                    {
                        std::cout << a << ' ' << b << ' ' << c << ' ' << d
                                  << '\n';
                    }
                }
            }
        }
    }
    
    return 0;
}
