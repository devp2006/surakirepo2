#include <iostream>
using namespace std;
int main()
{
    int d1 = 0, d2 = 0;
    start:
    cout << "\n Roll the dice1: ";
    cin >> d1;
    cout << "\n Roll the dice2: ";
    cin >> d2;
    if ((d1 < 1 && d1 > 6) && (d2 < 1 && d2 > 6))
    {
        goto start;
    }
    int sum = d1 + d2;
    if(sum > 6)
    {
        cout << " \n It is a good turn";
    }
    else
    {
        cout << " \n It is a bad turn";
    }
    return 0;
}
