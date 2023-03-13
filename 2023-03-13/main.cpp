#include <iostream>

int main()
{
    // compute number of digits in an integer value
    int x;
    std::cin >> x;
    int numdigits = 0;
    std::cout << "x:" << x << ", numdigits:" << numdigits << '\n';

    if (x == 0)
    {
        numdigits = 1;
    }
    else
    {
        for (;x > 0;)  // replace "while (x > 0)"
        {
            x /= 10;
            ++numdigits;
            std::cout << "x:" << x << ", numdigits:" << numdigits << '\n';
        }
    }

    std::cout << "FINAL ... x:" << x << ", numdigits:" << numdigits << '\n';

    return 0;
}
