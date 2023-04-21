#include <iostream>

const int N = 3;
void print_menu();
void play();
void help();
void initialize(char board[N][N]);
void print(char board[N][N]);
void toggle_turn(char & turn);
void get_move(char board[N][N], int & r, int & c);
bool player_wins(char board[N][N], int r, int c);
bool player_wins_by_row(char board[N][N], char turn, int r);
bool player_wins_by_column(char board[N][N], char turn, int c);
bool player_wins_by_diagonal(char board[N][N], char turn, int r, int c);
bool board_full(char board[N][N]);

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

void get_move(char board[N][N], char turn, int & r, int & c)
{
    while (1)
    {
        std::cout << "Player " << turn << " to move. Enter row and column. ";
        std::cin >> r >> c;
        if (0 <= r && r < N && 0 <= c && c < N && board[r][c] == ' ')
        {
            return;
        }
        std::cout << "invalid move!!! try again!!!\n";
    }
}

bool player_wins_by_row(char board[N][N], char turn, int r)
{
    for (int i = 0; i < N; ++i)
    {
        if (board[r][i] != turn)
        {
            return false;
        }
    }
    return true;
}

bool player_wins_by_column(char board[N][N], char turn, int c)
{
    for (int i = 0; i < N; ++i)
    {
        if (board[i][c] != turn)
        {
            return false;
        }
    }
    return true;
}

bool player_wins_by_diagonal(char board[N][N], char turn, int r, int c)
{
    if (r == c)
    {
        // top-left to bottom-right diagonal
        //       c
        //   ? x x x
        //   x ? x x
        // r x x ? x
        //   x x x ?
        for (int i = 0; i < N; ++i)
        {
            if (board[i][i] != turn)
            {
                return false;
            }
        }
        return true;
    }
    if (r + c == N - 1)
    {
        // top-left to bottom-right diagonal
        //       c
        //   x x x ?
        // r x x ? x
        //   x ? x x
        //   ? x x x
        for (int i = 0; i < N; ++i)
        {
            if (board[i][N - 1 - i] != turn)
            {
                return false;
            }
        }
        return true;
    }
    return false;
}

bool player_wins(char board[N][N], int r, int c)
{
    char turn = board[r][c];
    if (player_wins_by_row(board, turn, r)) return true;
    if (player_wins_by_column(board, turn, r)) return true;
    if (player_wins_by_diagonal(board, turn, r, c)) return true;
    return false;
}

bool board_full(char board[N][N])
{
    for (int r = 0; r < N; ++r)
    {
        for (int c = 0; c < N; ++c)
        {
            if (board[r][c] == ' ') return false;
        }
    }
    return true;
}

void play()
{
    char board[N][N];
    char turn = 'X';
    initialize(board);
    char winner = ' '; // 'X', 'O', or ' ' (draw)
    while (1)
    {
        print(board);
        int r, c;

        get_move(board, turn, r, c);
        board[r][c] = turn;
        if (player_wins(board, r, c))
        {
            winner = turn;
            break;
        }
        if (board_full(board))
        {
            winner = ' ';
            break;
        }
        toggle_turn(turn);
    }
    
    print(board);
    if (winner == ' ')
    {
        std::cout << "It's a draw!!!\n";    
    }
    else
    {
        std::cout << "Player " << winner << " wins!!!\n";
    }
}

void toggle_turn(char & turn)
{
    turn = (turn == 'X' ? 'O' : 'X');
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
