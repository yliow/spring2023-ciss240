#include <iostream>

int main()
{
    int x0, x1;
    std::cin >> x0 >> x1;

    if (x0 >= 42 && x1 >= 42)
    {
        std::cout << x0 << ' ' << x1 << '\n'; 
    }
    else
    {
        if (x0 < 42 && x1 >= 42)
        {
            std::cout << '*' << ' ' << x1 << '\n';         
        }
        else
        {
            if (x0 >= 42 && x1 < 42)
            {
                std::cout << x0 << ' ' << '*' << '\n';
            }
            else
            {
                std::cout << '*' << ' ' << '*' << '\n';
            }
        }
    }


    if (x0 >= 42)
    {
        std::cout << x0 << ' ';
    }
    else
    {
        std::cout << '*' << ' ';
    }
    if (x1 >= 42)
    {
        std::cout << x1 << ' ';
    }
    else
    {
        std::cout << '*' << ' ';
    }
    std::cout << '\n';

    return 0;
}
