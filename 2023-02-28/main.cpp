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

    if (my_pos == BEGINNING_OF_ROAD)
    {
        std::cout << "You are at the beginning of the road\n";
        std::cout << "Options: E (go east), ....\n";
        std::cin >> input;
        std::cout << "input is " << input << '\n';
    }
    else if (my_pos == SHACK)
    {
        std::cout << "You are at the shack\n";        
    }
    
    return 0;
}
