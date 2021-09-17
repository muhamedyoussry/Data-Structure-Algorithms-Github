#include <iostream>
using namespace std;

int max_number(int a, int b)
{
  if (a >= b)
  {
    return a;
  }
  else
  {
    return b;
  }
}

long long lcm_naive(int a, int b)
{
  for (long long l = max_number(a, b); l <= (long long)a * b; l++)
    if (l % a == 0 && l % b == 0)
    {
      return l;
    }

  return (long long)a * b;
}

long long lcm_faster(int a, int b)
{
  long long l = max_number(a, b);
  long long maxNumber= max_number(a, b);
  long i = 2;

  while (l < (long long)a * b)
  {
    if (l % a == 0 && l % b == 0)
    {
      return l;
    }
    else
    {
      l = maxNumber * i;
      i++;
    }
  }
  return (long long)a * b;
}

int main()
{
  int a, b;
  cin >> a >> b;
  //cout << lcm_naive(a, b) << endl;
  cout << lcm_faster(a, b) << endl;
  return 0;
}
