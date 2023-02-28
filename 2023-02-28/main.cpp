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
    bool sabrina_saved = false;
    char input;

    for (int i = 0; i < 11; i = i + 1)
    {
        std::cout << "i:" << i << '\n';
        if (my_pos == BEGINNING_OF_ROAD)
        {
            std::cout << "You are at the beginning of the road\n";
            std::cout << "Options: q (quit), E (go east), ....\n";
            std::cin >> input;
            if (input == 'E')
            {
                my_pos = SHACK;
            }
            else if (input == 'q')
            {
                break;
            }
        }
        else if (my_pos == SHACK)
        {
            std::cout << "You are at the shack\n";
            std::cout << "Options: W (go west), ....\n";
            std::cin >> input;
            if (input == 'W')
            {
                my_pos = BEGINNING_OF_ROAD;
            }
        }
    }
    std::cout << "end of game!!!\n";
    if (!sabrina_saved)
    {
        std::cout << "you did not save princess sabrina!!! she died!!!\n";
    }
    return 0;
}
