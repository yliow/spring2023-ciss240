#include <iostream>

void print_menu();
void play();
void help();

int main()
{
    print_menu();
    char option[1024];
    std::cout << "option? ";
    std::cin >> option;
    switch (option[0])
    {
        case 'p':
            play();
            break;
        case '?':
            help();
            break;
        case 'q':
            std::cout << "good bye!\n";
            break;
    }
    return 0;
}

void play()
{
    char board[3][3];
    // initializing the board
    for (int r = 0; r < 3; ++r)
    {
        for (int c = 0; c < 3; ++c)
        {
            //std::cout << r << ',' << c << '\n';
            board[r][c] = ' ';
        }
    }
    // print board
    std::cout << "+-+-+-+\n";
    for (int r = 0; r < 3; ++r)
    {
        std::cout << '|';
        for (int c = 0; c < 3; ++c)
        {
            std::cout << board[r][c] << '|';
        }
        std::cout << '\n';
        std::cout << "+-+-+-+\n";
    }
}

void help()
{
    std::cout << "help() ... TODO\n";
}

void print_menu()
{
    std::cout << "welcome to ttt v 0.1\n"
              << "by y.liow\n"
              << "sent donations to yliow@ccis.edu\n"
              << "[p] play game\n"
              << "[?] help\n"
              << "[q] quit\n";
}

// void swap(int & i, int & j);

// int main()
// {
//     int i = 0, j = 1;
//     swap(i, j);
//     std::cout << i << ' ' << j << '\n';
    
//     return 0;
// }

// // swap
// void swap(int & i, int & j)
// {
//     int t = i;
//     i = j;
//     j = t;
// }
