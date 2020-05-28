#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

long long MaxPairwiseProduct(vector<int> x, int length);
long long MaxPairwiseProductFast(vector<int> x, int length);

int main()
{
    srand(time(0));
    while (true)
    {
        int n = rand() % 10 + 2;
        cout << n << endl;
        // to generate random numbers from 1 to 10 for the vector length
        vector<int> stress_test;
        // create stress test vector
        for (int i = 0; i < n; i++)
        {
            stress_test.push_back(rand() % 100000);
            // generate random vector elements to test on it
        }
        long long result = MaxPairwiseProduct(stress_test, n);
        long long resultFast = MaxPairwiseProductFast(stress_test, n);
        for (int i = 0; i < n; i++)
        {
            cout << stress_test[i] << " ";
        }

        if (result != resultFast)
        {
            cout << "Wrong answer "
                 << "result = " << result << "... result fast = " << resultFast << endl;
            break;
        }
        else
        {
            cout << " OK " << endl;
        }
    }

    // int len = 0;
    // cout << "Enter the vector length: ";
    // cin >> len;
    // vector<int> data(len);
    // for (int i = 0; i < len; i++)
    // {
    //     cin >> data[i];
    //     data.push_back(data[i]);
    // }
    // cout << "the maximum pairwise product of this vector: " << MaxPairwiseProduct(data, len) << endl;
    // cout << "the maximum pairwise product fast of this vector: " << MaxPairwiseProductFast(data, len) << endl;
}

long long MaxPairwiseProduct(vector<int> x, int length)
{
    long long result = 0;
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (x[i] * x[j] > result)
            {
                result = x[i] * x[j];
            }
        }
    }
    return result;
}

long long MaxPairwiseProductFast(vector<int> x, int length)
{
    int maxIndex1 = 0;
    int maxIndex2 = length-1;
    for (int i = 0; i < length; i++)
    {
        if (x[i] > x[maxIndex1]  && i != maxIndex2)
        {
            maxIndex1 = i;
        }
    }
    for (int i = 0; i < length; i++)
    {
        if (x[i] > x[maxIndex2] && i != maxIndex1)
        {
            maxIndex2 = i;
        }
    }
    return (x[maxIndex1] * x[maxIndex2]);
}