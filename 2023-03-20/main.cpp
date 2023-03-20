#include <iostream>
#include <cmath>

int num_digits(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int N = 0;
        while (n != 0)
        {
            n /= 10;
            ++N;
        }
        return N;
    }
}

int digit_i(int n, int i)
{
    return n / int(pow(10, i)) % 10;
}

int sum_digits(int n)
{
    int s = 0;
    for (int i = 0; i < num_digits(n); ++i)
    {
        int n_i = digit_i(n, i);
        s += n_i;
    }
    std::cout << s << '\n';
    return s;
}

int main()
{
    int n;
    std::cin >> n;
    
    while (num_digits(n) > 1)
    {
        n = sum_digits(n);
    }
    
    return 0;
}
