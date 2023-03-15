#include <iostream>
#include <cmath>


bool isprime(int n)
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        for (int d = 2; d <= sqrt(n); ++d)
        {
                if (n % d == 0)
                {
                    return false;
                }
        }
    }
    return true;
}






int main()
{
    int numprimes = 1;
    for (int n = 900000000; n <= 1000000000; ++n)
    {        
        if (isprime(n))
        {
            std::cout << numprimes << ". " << n << '\n';
            ++numprimes;
        }
    }
    return 0;
}
