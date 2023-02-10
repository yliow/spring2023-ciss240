#include <iostream>

int main()
{
    int gun0_pos = -3;
    int gun1_pos = -5;
    int range = 2;
    int person_pos;
    std::cin >> person_pos;

    bool in_range0 = (gun0_pos - range <= person_pos &&
                      person_pos <= gun0_pos + range);

    bool in_range1 = (gun1_pos - range <= person_pos &&
                      person_pos <= gun1_pos + range);
        
    bool in_range = in_range0 || in_range1;
    std::cout << in_range << '\n';
    
    return 0;
}
