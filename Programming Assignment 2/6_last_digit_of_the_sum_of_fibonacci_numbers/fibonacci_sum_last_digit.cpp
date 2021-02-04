#include <iostream>
using namespace std;

int get_pisano_period(int n)
{
    long long a = 0;
    long long b = 1;
    long long c = a + b;
    for (int i = 0; i < 100; i++)
    {
        c = (a + b) % n;
        a = b;
        b = c;
        if (a == 0 & b == 1)
        {
            return i + 1;
        }
    }
}

int pisano_sum(int pi)
{
    int pisano_sum = 0;

    long long F[pi + 1] = {};
    F[0] = 0;
    F[-1] = 1;

    for (long long i = 1; i <= pi; i++)
    {
        F[i] = (F[i - 1] + F[i - 2]) % 10;
        pisano_sum = pisano_sum + F[i];
    }
    return pisano_sum % 10;
}

int fibonacci_sum_faster(long long n)
{
    long long pi = get_pisano_period(10);
    long long number_of_pisano_sums = n / pi;
    long long number_of_remainder_pisano_sums = n % pi;
    long long final_sum = pisano_sum(pi) * number_of_pisano_sums;

    long long F[number_of_remainder_pisano_sums + 1] = {};
    F[0] = 0;
    F[-1] = 1;

    for (int i = 1; i <= number_of_remainder_pisano_sums; i++)
    {
        F[i] = (F[i - 1] + F[i - 2]) % 10;
        final_sum = final_sum + F[i];
    }
    return final_sum % 10;
}

int main()
{
    long long n = 0;
    cin >> n;
    cout << fibonacci_sum_faster(n);
    //cout << fibonacci_sum_naive(n);
}
