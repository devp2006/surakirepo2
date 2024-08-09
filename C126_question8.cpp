#include <iostream>
using namespace std;
int main()
{
    int n, d;
    cout << "Enter no of people: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter age of person: ";
        cin >> arr[i];
    }
    cout << "Enter no of vaccines per day: ";
    cin >> d;
    int c1 = 0, c2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= 80 || arr[i] <= 9)
            c1++;
        else
            c2++;
    }
    int days = (c1/d) + (c2/d);
    if(c1 % d == 0)
        days++;
    if(c2 % d == 0)
        days++;

    cout << "Total no of days: " << days;
    return 0;
}
