#include <iostream>
using namespace std;

unsigned long long get_fibonacci_huge_naive(unsigned long long n, unsigned long long m)
{
    if (n <= 1)
        return n;

    unsigned long long previous = 0;
    unsigned long long current = 1;

    for (unsigned long long i = 0; i < n - 1; ++i)
    {
        unsigned long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % m;
}

long long get_pisano_period(long long m)
{
    long long a = 0, b = 1, c = a + b;
    for (int i = 0; i < m * m; i++)
    {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1)
        {
            return i + 1;
        }
    }
}
unsigned long long get_fibonacci_huge_faster(unsigned long long n, unsigned long long m)
{
    n = n % get_pisano_period(m);
    unsigned long long F[n + 1] = {};
    F[0] = 0;
    F[-1] = 1;

    for (int i = 1; i <= n; i++)
    {
        F[i] = F[i - 1] + F[i - 2];
        F[i] = F[i] % m;
    }
    return F[n];
}

int main()
{
    unsigned long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_faster(n, m) << '\n';
}
