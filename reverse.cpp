#include <iostream>
using namespace std;

int *reverse(int arr[], int n)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }

    return arr;
}

int main()
{
    int arr[] = {5, 7, 12, 1};

    int *result = reverse(arr, 4);

    for (int i = 0; i < 4; i++)
    {
        cout << result[i] << " ";
    }
}