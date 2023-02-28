/*
               dracula castle
                     |S
                     |
                     |
             W       |N       E
      -------- middle of road ------                        
     /               |S             \
    /                |               \
   |                 |                |
  N| E      W        |N     E         |N
pond ------ beginning of road ------- shack

 */
#include <iostream>

int main()
{
    
    const int BEGINNING_OF_ROAD = 1;
    const int SHACK = 2;
    
    int my_pos = BEGINNING_OF_ROAD;
    char input;

    for (int i = 0; i < 3; i = i + 1)
    {
        std::cout << "i:" << i << '\n';
        if (my_pos == BEGINNING_OF_ROAD)
        {
            std::cout << "You are at the beginning of the road\n";
            std::cout << "Options: E (go east), ....\n";
            std::cin >> input;
            if (input == 'E')
            {
                my_pos = SHACK;
            }
        }
        else if (my_pos == SHACK)
        {
            std::cout << "You are at the shack\n";
            std::cout << "Options: W (go west), ....\n";
            std::cin >> input;
            if (input == 'W')
            {
                my_pos = BEGINNING_OF_THE_ROAD;
            }
        }
        std::cout << my_pos << '\n';
    }
    return 0;
}
