#include <iostream>
using namespace std;
int main()
{
    int x = 0, y = 0, a = 0;
    cout << "Enter minimum age limit: ";
    cin >> x;
    cout << "Enter maximum age limit: ";
    cin >> y;
    cout << "Enter candidate age: ";
    cin >> a;
    if(a >= x && a < y)
    {
        cout << "Eligible";
    }
    else
        cout << "Not eligible";
    return 0;
}
