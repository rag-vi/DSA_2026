#include <iostream>
using namespace std;
int insert(int arr[], int cap, int n, int pos, int x)
{
    if (n == cap)
    {
        return n;
    }
    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = x;

    return n + 1;
}
int main()
{
    int cap;
    cout << "enter capacity of array" << endl;
    cin >> cap;
    int arr[cap];
    int n;
    cout << "enter current elements" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "enter element to be inserted" << endl;
    cin >> x;
    int pos;
    cout << "enter position of element" << endl;
    cin >> pos;
    int result = insert(arr, cap, n, pos, x);
    if (result != n)
    {
        cout << "Array after insertion is: ";

        for (int i = 0; i < result; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
    else
    {
        cout << "not inserted already full" << endl;
    }
    return 0;
}