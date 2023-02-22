#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand((unsigned int) time(NULL));
    // for (int i = 0; i < 20; ++i)
    // {
    int x = rand() % 10 + 90;
    int y = rand() % 10 + 90;
    // std::cout << i << ' ' << x << ' ' << y << '\n';
    // }
    int answer = x * y; // avoid computing x * y twice

    std::cout << answer << '\n';
    std::cout << "What is the product of " << x << " and " << y << "? ";
    int guess;
    std::cin >> guess;
    int score;
    if (guess == answer)
    {
        std::cout << "You smart dawg!!!\n";
        score = 2;
    }
    else
    {
        if (guess < answer)
        {
            std::cout << "Your answer is too low. Try something higher.\n";
            std::cout << "What is the product of " << x << " and " << y << "? ";
            std::cin >> guess;
            if (guess == answer)
            {
                std::cout << "You smart dawg!!!\n";        
                score = 1;
            }
            else
            {
                std::cout << "The correct answer is " << answer << '\n';
                score = 0;
            }
        }
        else
        {
            std::cout << "Your answer is too high. Try something lower.\n";
            std::cout << "What is the product of " << x << " and " << y << "? ";
            std::cin >> guess;
            if (guess == answer)
            {
                std::cout << "You smart dawg!!!\n";
                score = 1;
            }
            else
            {
                std::cout << "The correct answer is " << answer << '\n';
                score = 0;
            }
        }
    }
    std::cout << "Score: " << score << '\n';
    
    return 0;
}
