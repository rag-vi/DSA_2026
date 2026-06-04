#include <iostream>
using namespace std;

int deleteEL(int arr[], int n, int x)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            break;
    }

    if (i == n)
    {
        return n;
    }

    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }

    return n - 1;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter x: ";
    cin >> x;

    int newSize = deleteEL(arr, n, x);

    if (newSize != n)
    {
        cout << "Array after deletion: ";

        for (int i = 0; i < newSize; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}