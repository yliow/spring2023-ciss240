#include <iostream>
#include <cstdlib>

void print_int(int x)
{
    std::cout << x;
    return;
}

void print_array(int b[1000000], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << b[i] << ' ';
    }
    std::cout << '\n';
}

void rand_array(int x[1000000], int n)
{
    for (int i = 0; i < n; ++i)
    {
        x[i] = rand() % 10;
    }
    return;
}

int main()
{
    // //print_int(42);
    
    // int a[1000000] = {5, 3, 1, 2, 4};
    // int b[5];
    // int n = 5;
    
    // // b = a; <----- ERROR

    // for (int i = 0; i < n; ++i)
    // {
    //     b[i] = a[i];
    // }

    // print_array(b, n);
    // // std::cout << (a == b) << '\n'; <---- ERROR!!!
    srand(0);
    int x[1000000];
    int n = 5;

    rand_array(x, n);
    print_array(x, n);
    
    return 0;
}
