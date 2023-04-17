#include <iostream>

//int A;

int square(int x)
{
    int ret = x * x;
    return ret;
}

void f(int x)
{
    std::cout << "in f ... x:" << x << '\n';
    x = 0;
    std::cout << "in f ... x:" << x << '\n';
}

void g(int & x)
{
    std::cout << "in g .. x:" << x << '\n';
    x = 0;
    std::cout << "in g .. x:" << x << '\n';
}

void change_to_42(int & x)
{
    x = 42;
}

int return_42()
{
    return 42;
}

int main()
{
    // int x = 42;
    // int i = square(5);
    // std::cout << i << '\n';
    // std::cout << "in main ... x:" << x << '\n';
    // f(x);
    // std::cout << "in main ... x:" << x << '\n';

    // std::cout << "in main .. x:" << x << '\n';
    // g(x);
    // std::cout << "in main .. x:" << x << '\n';

    // int x = 0;
    // change_to_42(x);
    // std::cout << x << '\n';

    // int y = 0;
    // y = return_42();
    // std::cout << y << '\n';
    return 0;
}
