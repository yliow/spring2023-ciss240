#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand((unsigned int) time(NULL));
    
    for (int i = 0; i < 10; i = i + 1)
    {
        std::cout << i << " ... " << double(rand()) / RAND_MAX * 4.2 << '\n';
    }
    std::cout << RAND_MAX << '\n';
    
    return 0;
}
