#include <iostream>
#include <cstdlib>
#include <ctime>

// randomize the array
void rand_array(int x[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        x[i] = rand() % 10;
    }
    return;
}

// print the array
void print_array(int x[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
}

int main()
{
    srand(0);
    int x[1024];
    int n = 5;
    rand_array(x, n);
    print_array(x, n);

    // bubblesort
    for (int i = 0; i <= n - 2; ++i)
    {
        if (x[i] > x[i + 1])
        {
            int t = x[i];
            x[i] = x[i + 1];
            x[i + 1] = t;
        }
        std::cout << i << ": ";
        print_array(x, n);
    }
    std::cout << '\n';
    for (int i = 0; i <= n - 3; ++i)
    {
        if (x[i] > x[i + 1])
        {
            int t = x[i];
            x[i] = x[i + 1];
            x[i + 1] = t;
        }
        std::cout << i << ": ";
        print_array(x, n);
    }

    return 0;
}
