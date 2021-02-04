#include <iostream>
#include <vector>
using std::vector;

unsigned long long get_fibonacci_partial_sum_naive(unsigned long long from, unsigned long long to)
{
    unsigned long long sum = 0;

    unsigned long long current = 0;
    unsigned long long next = 1;

    for (unsigned long long i = 0; i <= to; ++i)
    {
        if (i >= from)
        {
            sum += current;
        }

        unsigned long long new_current = next;
        next = next + current;
        current = new_current;
    }

    return sum % 10;
}

int get_fibonacci_partial_sum_faster(unsigned long long from, unsigned long long to)
{
    unsigned long long F[to + 1] = {};
    F[-1] = 1;
    F[0] = 0;
    unsigned long long sum = 0;

    for (unsigned long long i = 1; i <= to; i++)
    {

        F[i] = (F[i - 1] + F[i - 2]);
        if (i >= from)
        {
            sum = sum + F[i];
        }
    }

    return sum % 10;
}
int main()
{
    unsigned long long from, to;
    std::cin >> from >> to;
    std::cout << get_fibonacci_partial_sum_faster(from, to) << '\n';
}
