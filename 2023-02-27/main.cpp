#include <iostream>

int main()
{
    // int x = -3, y = 1, z = 2;

    // if (x >= 0)
    // {
    //     y = x + z;
    // }
    // else
    // {
    //     y = x - z;
    // }

    // y = (x >= 0 ? x + z : x - z);
    // std::cout << (x >= 0 ? x + z : x - z) << '\n';
    // std::cout << y << '\n';

    // int a;
    // std::cin >> a;
    // int abs_a;
    // if (a >= 0)
    // {
    //     abs_a = a;
    // }
    // else
    // {
    //     abs_a = -a;
    // }
    // abs_a = (a >= 0 ? a : -a);
    
    // std::cout << abs_a << '\n';

    int x;
    std::cin >> x;
    // if (x == 0)
    // {
    //     std::cout << "ham\n";
    // }
    // else if (x == 1)
    // {
    //     std::cout << "eggs\n";
    // }
    // else
    // {
    //     std::cout << "sausage\n";
    // }

    switch (x)
    {
        case 0:
            std::cout << "ham\n";
            //break;
        case 5:
            std::cout << "eggs\n";
            //break;
        default:
            std::cout << "sausage\n";
            break;
    }
    
    return 0;
}
