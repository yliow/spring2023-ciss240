#include <iostream>

const int N = 3;
void print_menu();
void play();
void help();
void initialize(char board[N][N]);
void print(char board[N][N]);

// void zero_out(int i)
// {
//     i = 0;
// }
// void zero_out(int & i)
// {
//     i = 0;
// }
void zero_out(int x[])
{
    x[0] = 0;
}

int main()
{
    // //int i = 42;
    // int i[10] = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    // //zero_out(i);
    // // i[0] is 0?
    // //std::cout << i[0] << '\n';
    // int & x = i[0];
    // std::cout << "i[0]:" << i[0] << '\n';
    // std::cout << "x:" << x << '\n';
    // zero_out(i);
    // std::cout << "i[0]:" << i[0] << '\n';
    // std::cout << "x:" << x << '\n';
    // return 0;
    
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

// initializing the board
void initialize(char board[N][N])
{
    for (int r = 0; r < N; ++r)
    {
        for (int c = 0; c < N; ++c)
        {
            board[r][c] = ' ';
        }
    }
}

// print board
void print(char board[N][N])
{
    std::cout << '+';
    for (int c = 0; c < N; ++c)
    {
        std::cout << "-+";
    }
    std::cout << '\n';
    for (int r = 0; r < N; ++r)
    {
        std::cout << '|';
        for (int c = 0; c < N; ++c)
        {
            std::cout << board[r][c] << '|';
        }
        std::cout << '\n';
        std::cout << '+';
        for (int c = 0; c < N; ++c)
        {
            std::cout << "-+";
        }
        std::cout << '\n';
    }
}

void play()
{
    char board[N][N];
    char turn = 'X';
    initialize(board);

    while (1)
    {
        print(board);
        std::cout << "Player " << turn << " to move. Enter row and column. ";
        int r, c;
        std::cin >> r >> c;
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
