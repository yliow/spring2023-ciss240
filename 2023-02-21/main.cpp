#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand((unsigned int) time(NULL));
    
    // int a;
    // std::cin >> a;
    // if (a == 42)
    // {
    //     std::cout << "that's my fav number too!!!\n";
    // }
    // else
    // {
    //     std::cout << "don't u like 42???\n";
    // }

    // int n;
    // std::cin >> n;
    // if (n % 2 == 0)
    // {
    //     std::cout << "even!!!\n";
    // }
    // else
    // {
    //     std::cout << "odd!!!\n";
    // }

    // std::cout << "What is the product of 97 and 94? ";
    // int guess;
    // std::cin >> guess;

    // if (guess == 9118)
    // {
    //     std::cout << "You smart dawg!\n";
    // }
    // else
    // {
    //     std::cout << "Nope ... it's 9118.\n";
    // }

    int x = rand() % 10 + 90;
    int y = rand() % 10 + 90;
    int answer = x * y;
    std::cout << "What is the product of " << x << " and " << y << "? ";
    int guess;
    std::cin >> guess;

    if (guess == answer)
    {
        std::cout << "You smart dawg!\n";
    }
    else
    {
        std::cout << "Nope ... it's " << answer << ".\n";
    }
    
    return 0;
}
