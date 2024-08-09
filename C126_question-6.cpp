#include <iostream>
using namespace std;
int main()
{
    int n, b;
    cout << "Enter Budget: ";
    cin >> b;
    cout << "Enter no of tablets: ";
    cin >> n;
    int p[n], w[n], h[n];
    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter width of tablet " << i+1 << " :";
        cin >> w[i];
        cout << "\nEnter height of tablet " << i+1 << " :";
        cin >> h[i];
        cout << "\nEnter price of tablet " << i+1 << " :";
        cin >> p[i];
    }
    int a = 0, ind = 0;
    for(int i = 0; i < n; i++)
    {
        if(p[i] <= b)
        {
            if((h[i] * w[i]) > a)
            {
                a = h[i] * w[i];
                ind = i + 1;
            }
        }
    }
    if(a == 0)
        cout << " No tablet: ";
    cout << "Tablet: "<< ind;

}
