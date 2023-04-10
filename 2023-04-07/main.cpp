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

int dist(int x[1000000], int n, int i) // i = home of party
{
    int s = 0;
    for (int j = 0; j < n; ++j)
    {
        s += abs(x[j] - x[i]);
    }
    return s;
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

    int best_index = 0;
    int best_dist = dist(x, n, 0);
    for (int i = 1; i < n; ++i)
    {
        int s = dist(x, n, i);
        if (s < best_dist)
        {
            best_index = i;
            best_dist = s;
        }
        std::cout << best_index << ' ' << best_dist << '\n';
    }
    std::cout << best_index << ' ' << best_dist << '\n';
    return 0;
}
