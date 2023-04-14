#include <iostream>

int main()
{
    // char c;
    // std::cin >> c;
    // std::cout << c << '\n';
    // std::cout << int(c) << '\n';
    // std::cout << 'Z' << ' ' << int('Z') << '\n';
    // char d = 65;
    // std::cout << d << '\n';

    // for (int i = 65; i <= 90; ++i)
    // {
    //     std::cout << char(i);
    // }
    // std::cout << '\n';
    
    // for (int i = 97; i <= 97+25; ++i)
    // {
    //     std::cout << char(i);
    // }
    // std::cout << '\n';
    // for (char x = 'a'; x <= 'z'; ++x)
    // {
    //     std::cout << x;
    // }
    // std::cout << '\n';

    // // c = '3' -> i = 3
    // // c = '9' -> i = 9
    // char c;
    // std::cin >> c;
    // std::cout << c << '\n';
    // int i = c - '0';
    // std::cout << i << ' ' << i + 1 << '\n';

    // std::cout << "hello world\n";
    // char s[1024] = "dk$ben.ana aadfasdfaqwiugaoru\n";
    // std::cout << s << '\n';
    // for (int i = 0; i < 10; ++i)
    // {
    //     std::cout << s[i] << '\n';
    // }

    // capitalize
    char s[1024]="abcdefghijkl"; // {'a','b','c','d','e','f','g','h','i','j','k','l','\0','A','B','C'};
    for (int i = 0; i < 10; ++i)
    {
        if ('a' <= s[i] && s[i] <= 'z')
        {
            s[i] = s[i] - 'a' + 'A';
        }
    }
    std::cout << s << '\n';

    // char s[1024] = {'h', 'e', 'l', 'l', 'o', '\0', 'w', 'o', 'r', 'l', 'd'};
    // std::cout << s << '\n';
    // std::cout << s[10] << '\n';
    
    return 0;
}


