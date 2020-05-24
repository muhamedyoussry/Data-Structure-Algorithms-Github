#include <iostream>
#include <vector>

using namespace std;

long long MaxPairwiseProduct(vector<int> x , int length );

int main()
{
    int len = 0 ;
    cout << "Enter the vector length: ";
    cin >> len ; 
    vector<int> data(len);
    for (int i = 0; i < len; i++)
    {
        cin >> data[i];
        data.push_back(data[i]);
    }
    cout << "the maximum pairwise product of this vector: " << MaxPairwiseProduct(data , len) << endl ; 
}

long long MaxPairwiseProduct(vector<int>x , int length )
{
    long long result = 0;
    for (int i = 0; i < length ; i++)
    {
        for (int j = i+1; j < length ;j++)
        {
           if (x[i]*x[j] > result )
           {
               result = x[i]*x[j]  ;
           }
        }
    }
    return result;
}