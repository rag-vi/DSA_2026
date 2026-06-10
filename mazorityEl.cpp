#include <iostream>
using namespace std;
int MazorityEL(int arr[], int n)
{
    int count = 1, res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
    }
    if (count <= n / 2)
        return -1;

    return arr[res];
}
int main()
{
    int arr[] = {6, 8, 4, 6, 6};
    int result = MazorityEL(arr, 5);
    cout << result << endl;
}