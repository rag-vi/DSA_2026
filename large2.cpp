#include <iostream>
using namespace std;
int larger(int arr[], int n)
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
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = larger(arr, n);
    cout << "larger element is " << arr[result] << endl;
}
