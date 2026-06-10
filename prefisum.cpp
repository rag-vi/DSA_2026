#include <iostream>
using namespace std;
int getSum(int arr[], int m, int n)
{
    int sum = 0;
    for (int i = m; i <= n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int result = getSum(arr, 0, 2);
    int result1 = getSum(arr, 1, 3);
    cout << result << "  " << result1 << endl;
}