#include <iostream>

int get_fibonacci_last_digit_naive(int n)
{
    int F[n] = {};
    F[0] = 0;
    F[1] = 1;

    if (n > 1)
    {
        for (int i = 2; i <= n; i++)
        {
            F[i] = (F[i - 1] + F[i - 2]) % 10;
        }
    }
    return F[n];
}

int main()
{
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
}
