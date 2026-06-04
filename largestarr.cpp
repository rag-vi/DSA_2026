#include <iostream>
using namespace std;
int largeEL(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)

            return arr[i];
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n] = {5, 8, 10, 12};
    cout << largeEL(arr, n) << endl;
    return 0;
}