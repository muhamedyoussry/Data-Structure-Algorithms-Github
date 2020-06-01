#include <iostream>
#include <cassert>

using namespace std;

unsigned long long naiveFibonacci(int n);
unsigned long long fastFibonacci(int n);

int main()
{
    int n = 0;
    cout << "Enter n: ";
    cin >> n;

    cout << fastFibonacci(n) << endl;
    cout << naiveFibonacci(n) << endl;
}

unsigned long long naiveFibonacci(int n)
{
    if (n <= 1)
    {
        // this means that n = 0 or n = 1
        return n;
    }
    else if (n > 1)
    {
        // recursive function
        return naiveFibonacci(n - 1) + naiveFibonacci(n - 2);
    }
    else
    {
        // to deal with worng user entry
        cout << "please make sure that you enter a number >= 0 " << endl;
    }
}

unsigned long long fastFibonacci(int n)
{
    // creat fibonacci array that holds n elements
    int F[n] = {};
    F[0] = 0;
    F[1] = 1;

    if (n > 1)
    {
        for (int i = 2; i <= n; i++)
        {
            F[i] = F[i - 1] + F[i - 2];
        }
    }
    return F[n];
}