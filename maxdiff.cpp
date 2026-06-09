#include <iostream>
using namespace std;
/*int maxDiff(int arr[], int n)
{
    int max = arr[1] - arr[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] - arr[i] >= max)
            {
                max = arr[j] - arr[i];
            }
        }
    }
    return max;
}*/
int maxNaive(int arr[], int n)
{
    int res = arr[1] - arr[0], minival = arr[0];
    for (int j = 1; j < n; j++)
    {
        res = max(res, arr[j] - minival);
        minival = min(minival, arr[j]);
    }
    return res;
}
int main()
{
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int n = 7;
    int result = maxNaive(arr, n);
    cout << result << endl;
}