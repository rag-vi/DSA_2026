#include <iostream>
using namespace std;
int *rotateOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    return arr;
}
int main()
{
    int arr[] = {2, 3, 4, 9, 10, 11};
    int *result = rotateOne(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << result[i] << " " << endl;
    }
}