#include <iostream>

int main()
{
    int x = -3, y = 1, z = 2;

    if (x >= 0)
    {
        y = x + z;
    }
    else
    {
        y = x - z;
    }

    std::cout << y << '\n';
    
    return 0;
}
