#include <iostream>

int main()
{
    int start, end;
    std::cin >> start >> end;
    
    std::cout << "n  " << ' ' << "n^2" << '\n';
    std::cout << "---" << ' ' << "---" << '\n';
    for (int i = start; i <= end; ++i)
    {
        std::cout << i << ' ' << i * i << '\n';
    }
        
    return 0;
}
