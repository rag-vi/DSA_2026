#include <iostream>
#include <vector>
using namespace std;
/*
int main()
{
    int n;
    cout << "enter n";
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    int x = 3; // stored on stack

    int *arr = new int(x); // value 20 stored on heap

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << arr[0];
}*/
int main()
{
    vector<int> v(5, 100);
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << endl;
    }
}