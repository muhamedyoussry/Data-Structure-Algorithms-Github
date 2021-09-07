#include <iostream>

int get_change(int m)
{
  int n = 0;
  int n10 = 0;
  int n5 = 0;

  n10 = m / 10;
  n5 = (m % 10) / 5;
  n = (m % 5) / 1;
  n = n10 + n5 + n;
  return n;
}

int main()
{
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
