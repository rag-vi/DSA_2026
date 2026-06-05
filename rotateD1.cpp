#include <iostream>
using namespace std;
int rotateOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}
int rotateD(int arr[], int n, int d)
{
    for (int i = 0; i < d; i++)
    {
        rotateOne(arr, n);
    }
}
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    int d;
    cout << "enter d" << endl;
    cin >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rotateD(arr, n, d);

    cout << "array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}