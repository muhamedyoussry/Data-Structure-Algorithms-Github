#include <iostream>
using namespace std;

int fibonacci_sum_naive(unsigned long long n)
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
        sum += current;
    }

    return sum % 10;
}

int fibonacci_sum_faster(unsigned long long n)
{
    unsigned long long F[n + 1] = {};
    F[0] = 0;
    unsigned long long sum = 0;
    if (n > 0)
    {
        F[1] = 1;
        sum = 1;
        for (unsigned long long i = 2; i <= n; i++)
        {
            F[i] = (F[i - 1] + F[i - 2]);
            sum = sum + F[i];
        }
    }

    return sum % 10;
}
int main()
{
    unsigned long long n = 0;
    cin >> n;
    cout << fibonacci_sum_faster(n);
    //cout << fibonacci_sum_naive(n);
}
