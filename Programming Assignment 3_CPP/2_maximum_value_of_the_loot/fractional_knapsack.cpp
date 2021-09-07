#include <iostream>
#include <vector>

using namespace std;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values)
{
  double value = 0.0;
  int max_index = 0;
  double max_value_per_weight = 0;

  for (int i = 0; i < values.size(); i++)
  {
    max_value_per_weight = values[0] / weights[0];
    max_index = 0;
    for (int i = 0; i < values.size(); i++)
    {
      if (max_value_per_weight < (values[i] / weights[i]))
      {
        max_value_per_weight = values[i] / weights[i];
        max_index = i;
      }
    }

    if (capacity != 0)
    {
      if (capacity - weights[max_index] >= 0)
      {
        value = value + values[max_index];
        capacity = capacity - weights[max_index];
        values.erase(values.begin() + max_index);
        weights.erase(weights.begin() + max_index);
      }
      else
      {
        value = value + (double(values[max_index]) * (double(capacity) / double(weights[max_index])));
        capacity = capacity - capacity;
        values.erase(values.begin() + max_index);
        weights.erase(weights.begin() + max_index);
      }
    }
  }

  return value;
}

int main()
{
  int n;
  int capacity;
  cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++)
  {
    cin >> values[i] >> weights[i];
  }
  double optimal_value = get_optimal_value(capacity, weights, values);

  cout.precision(10);
  cout << optimal_value << endl;
  return 0;
}
