#include <iostream>
using namespace std;

class Operations
{
public:
    bool arr[1000] = {0};

    void insert(int i)
    {
        arr[i] = 1;
    }

    void deletee(int i)
    {
        arr[i] = 0;
    }

    bool search(int i)
    {
        return arr[i];
    }
};

int main()
{
    Operations obj;

    obj.insert(5);
    obj.insert(10);

    cout << obj.search(5) << endl;  // 1
    cout << obj.search(10) << endl; // 0

    obj.deletee(5);

    cout << obj.search(5) << endl; // 0

    return 0;
}