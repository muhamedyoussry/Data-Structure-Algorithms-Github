#include <iostream>

using namespace std;
int sum_of_two_digits(int first_digit, int second_digit)
{
    return first_digit + second_digit;
}
int main()
{
    int a, b = 0;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "a + b = " << sum_of_two_digits(a, b) << endl;
    return 0;
}