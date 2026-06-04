#include <iostream>
using namespace std;
int getlarger(int arr[], int n)
{
    int max = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[max])
        {
            max = i;
        }
    }
    return max;
}
int getSecond(int arr[], int n)
{
    int largest = getlarger(arr, n);
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[largest])
        {
            if (res == -1)
            {
                res = i;
            }
            else if (arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}
int main()
{
    int n;
    cout << "enter size" << endl;
    cin >> n;

    cout << "enter elements of array" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int secondLargest = getSecond(arr, n);
    cout << "Second largest element is index is :" << secondLargest << "  and the value is " << arr[secondLargest] << endl;
    ;
}