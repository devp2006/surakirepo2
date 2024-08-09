#include <iostream>
using namespace std;
int main()
{
    int a, b, t = 0;
    cout << "Enter Sahil's position: ";
    cin >> a;
    cout << "Enter Dev's position: ";
    cin >> b;
    while(true)
    {
        if(a == b)
        {
            cout << "Sahil and Dev will meet at "<< t<< " Seconds";
            break;
        }
        a += 1;
        b += 2;

        if(a < b)
        {
            cout << "Sahil and Dev will never meet";
            break;
        }
        t++;

    }
}
