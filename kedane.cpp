#include <iostream>
using namespace std;
int Max(int arr[], int n)
{
    int maxEnding = arr[0];
    int res = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(maxEnding, res);
    }
    return res;
}
int main()
{
    int arr[] = {-5, 1, -2, 3, -1, 2, -2};
    int result = Max(arr, 7);
    cout << result << endl;
}