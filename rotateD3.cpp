#include <iostream>
using namespace std;
int reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
int rotateD(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}
int main()
{
    int arr[] = {1, 2, 3, 6, 5};
    int n = 5;
    int d = 2;
    rotateD(arr, n, d);
    cout << "array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}