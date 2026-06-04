#include <iostream>
using namespace std;
int main()
{
    int Age;
    char Gender;
    cout << "enter age" << endl;
    cin >> Age;
    cout << "enter M or F" << endl;
    cin >> Gender;
    if (Gender == 'M')
    {
        if (Age > 18)

            cout << "MALE ADULT" << endl;

        else
            cout << "MALE KID" << endl;
    }
    else if (Gender == 'F')
    {
        if (Age > 18)

            cout << "FEMALE ADULT" << endl;
        else
            cout << "FEMALE KID" << endl;
    }
    else
    {
        cout << "INVALID GENDER" << endl;
    }
}