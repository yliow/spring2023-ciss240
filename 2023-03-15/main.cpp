#include <iostream>

int main()
{
    int numprimes = 1;
    for (int n = 0; n <= 10000; ++n)
    {
        bool isprime = true;
        if (n < 2)
        {
            isprime = false;
        }
        else
        {
            for (int d = 2; d < n; ++d)
            {
                if (n % d == 0)
                {
                    isprime = false;
                    break;
                }
            }
        }
        
        if (isprime)
        {
            std::cout << numprimes << ". " << n << '\n';
            ++numprimes;
        }
    }
    return 0;
}
