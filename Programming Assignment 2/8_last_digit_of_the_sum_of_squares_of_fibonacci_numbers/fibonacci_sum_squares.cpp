#include <iostream>
#include <math.h>

int fibonacci_sum_squares_naive(unsigned long long n)
{
    if (n <= 1)
        return n;

    unsigned long long previous = 0;
    unsigned long long current = 1;
    unsigned long long sum = 1;

    for (unsigned long long i = 0; i < n - 1; ++i)
    {
        unsigned long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current * current;
    }

    return sum % 10;
}

int fibonacci_sum_squares_faster(unsigned long long n)
{
    unsigned long long F[n + 1] = {};
    F[0] = 0;
    F[-1] = 1;
    unsigned long long sum = 0;
    for (unsigned long long i = 1; i <= n; i++)
    {
        F[i] = (F[i - 1] + F[i - 2]);
        sum = sum + (F[i] * F[i]);
    }

    return sum % 10;
}

int main()
{
    unsigned long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_squares_faster(n);
}
