#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter minimum amount of money to pay tax on: ";
    cin >> y;
    cout << "Enter money earned: ";
    cin >> x;
    cout << "Minimum money to be invested: " << (x-y);
    return 0;
}
