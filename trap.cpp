#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 0, 1, 2, 5};
    int n = 5;

    int leftLargest[n];
    int rightLargest[n];

    // Build leftLargest
    leftLargest[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        leftLargest[i] = max(leftLargest[i - 1], arr[i]);
    }

    // Build rightLargest
    rightLargest[n - 1] = arr[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        rightLargest[i] = max(rightLargest[i + 1], arr[i]);
    }

    cout << "Index\tArr\tLeftMax\tRightMax\n";

    for (int i = 0; i < n; i++)
    {
        cout << i << "\t"
             << arr[i] << "\t"
             << leftLargest[i] << "\t"
             << rightLargest[i] << endl;
    }
}