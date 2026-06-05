#include <iostream>
using namespace std;
int rotateD2(int arr[], int n, int d)
{
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int d = 2;
    rotateD2(arr, n, d);
    cout << " array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}