#include <iostream>
#include <cstdlib>
#include <ctime>

// randomize the array
void rand_array(int x[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        x[i] = rand() % 50;
    }
    return;
}

// print the array
void print_array(int x[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
}

// bubblesort on x[0] up to x[n - 1]
void bubblesort(int x[100000], int n)
{
    for (int j = n - 2; j >= 0; --j)
    {
        for (int i = 0; i <= j; ++i)
        {
            if (x[i] > x[i + 1])
            {
                int t = x[i];
                x[i] = x[i + 1];
                x[i + 1] = t;
            }
            //std::cout << i << ": ";
            //print_array(x, n);
        }
        //std::cout << '\n';
    }
    return;
}

int main()
{
    // srand(0);
    // int x[1000000];
    // int n = 20;
    // rand_array(x, n);
    // print_array(x, n);
    // bubblesort(x, n);
    // print_array(x, n);

    // int target;
    // std::cin >> target;
    
    // // bin search
    // int left = 0;
    // int right = n - 1;
    // int index = -1;
    // while (left <= right)
    // {
    //     int mid = (left + right) / 2;
    //     std::cout << "left,mid,right:"
    //               << left << ' ' << mid << ' ' << right << '\n';
    //     if (x[mid] == target)
    //     {
    //         std::cout << "found!\n";
    //         index = mid;
    //         break;
    //     }
    //     else if (x[mid] < target)
    //     {
    //         std::cout << "chase toward the right!\n";
    //         left = mid + 1;
    //     }
    //     else
    //     {
    //         std::cout << "chase toward the left!\n";
    //         right = mid - 1;
    //     }
    // }

    char c = 'A';
    std::cout << c << ' ' << int(c) << '\n';
    std::cin >> c;
    std::cout << c << ' ' << int(c) << '\n';
    return 0;
}
