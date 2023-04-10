#include <iostream>
#include <cstdlib>
#include <ctime>

// randomize the array
void rand_array(int x[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        x[i] = rand() % 1000;
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
    int n = 1000;
    rand_array(x, n);
    print_array(x, n);

    // bubblesort
    for (int j = n - 2; j >= 0; --j)
    {
        for (int i = 0; i <= j; ++i)
        {
            if (x[i] > x[i + 1])
            {
                int t = x[i];
                x[i] = x[i + 1];
                x[i + 1] = t;
            }
            //std::cout << i << ": ";
            //print_array(x, n);
        }
        //std::cout << '\n';
    }
    print_array(x, n);

    return 0;
}
