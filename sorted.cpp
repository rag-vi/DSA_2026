#include <iostream>
using namespace std;
int sorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {

        if (arr[i - 1] > arr[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = {5, 8, 8};
    int result = sorted(arr, 3);
    cout << result << endl;
}