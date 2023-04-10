#include <iostream>
#include <cstdlib>
#include <ctime>

void rand_array(int x[], int n)
{
    // randomize the array
    for (int i = 0; i < n; ++i)
    {
        x[i] = rand() % 10;
    }
    return;
}

int main()
{
    srand(0);
    int x[1024];
    int n = 5;
    rand_array(x, n);
    // print the array
    for (int i = 0; i < n; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
    
    return 0;
}
