#include <iostream>
using namespace std;
int freq(int arr[], int n)
{
    int i = 1;
    int frequency = 1;
    while (i < n)
    {

        while (i < n && arr[i] == arr[i - 1])
        {
            frequency++;
            i++;
        }
        cout << arr[i - 1] << " " << frequency << endl;
        i++;
        frequency = 1;
    }
    if (n == 1 || arr[n - 1] != arr[n - 2])
    {
        cout << arr[n - 1] << " " << frequency << endl;
    }
}
int main()

{
    int arr[] = {10, 10, 20, 20, 30, 40};
    freq(arr, 6);
}