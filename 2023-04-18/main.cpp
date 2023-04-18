#include <iostream>

int main()
{
    int i = 0, j = 1;

    // swap
    int t = i;
    i = j;
    j = t;
    std::cout << i << ' ' << j << '\n';
    
    return 0;
}
