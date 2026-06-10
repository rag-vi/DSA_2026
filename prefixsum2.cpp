#include <iostream>
using namespace std;

class Solution
{
public:
    int prr[100];

    void buildPrefixSum(int arr[], int n)
    {
        prr[0] = arr[0];

        for (int i = 1; i < n; i++)
        {
            prr[i] = prr[i - 1] + arr[i];
        }
    }

    int getSum(int l, int r)
    {
        if (l == 0)
        {
            return prr[r];
        }

        return prr[r] - prr[l - 1];
    }
};

int main()
{
    int arr[] = {2, 8, 3, 9, 6, 5, 4};
    int n = 7;

    Solution obj;

    obj.buildPrefixSum(arr, n);

    int result = obj.getSum(0, 2);

    cout << result << endl;

    return 0;
}