#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

long naiveGCD(long a, long b);
long fasterGCD(long a, long b);
long minTwoNumebrs(int a, int b);
long maxTwoNumebrs(int a, int b);

int main()
{

  long a, b = 0;
  //cout << "Enter the two numbers: ";
  cin >> a >> b;

  //cout << "GCD = " << naiveGCD(a, b) << endl;
  //cout << "GCD = " << fasterGCD(a, b) << endl;
  cout << fasterGCD(a, b) << endl;
}

long naiveGCD(long a, long b)
{
  long GCD = 1;
  for (int i = 1; i <= a && i <= b; i++)
  {
    if (a % i == 0 && b % i == 0)
    {
      GCD = i;
    }
  }
  return GCD;
}

long fasterGCD(long a, long b)
{
  long GCD = 0;
  long min = minTwoNumebrs(a, b);
  long max = maxTwoNumebrs(a, b);
  long prime = max % min;
  if (prime == 0)
  {
    GCD = min;
    return GCD ; 
  }
  else
  {
    return fasterGCD(prime, min);
  }
}

long minTwoNumebrs(int a, int b)
{
  if (a >= b)
  {
    return b;
  }
  else
  {
    return a;
  }
}

long maxTwoNumebrs(int a, int b)
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
