#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    int M;
    cout << "Enter first and second number" << endl;
    cin >> num1 >> num2;
    cout << "1.ENTER 1 FOR ADD" << endl
         << "2. ENTER 2 FOR SUB" << endl
         << "3. ENTER 3 FOR MUL" << endl
         << "4. ENTER 4 FOR DIV" << endl
         << "5. EXIT" << endl;
    cin >> M;
    switch (M)
    {
    case 1:
        cout << "SUM = " << num1 + num2 << endl;
        break;
    case 2:
        cout << "SUB = " << num1 - num2 << endl;
        break;
    case 3:
        cout << "MUL = " << num1 * num2 << endl;
        break;
    case 4:
        cout << "DIV = " << num1 / num2 << endl;
        break;
    case 5:
        cout << "EXIT" << endl;
        break;

    default:
        cout << "INVALID M";
        break;
    }
}