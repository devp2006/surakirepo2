#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no of elements: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter a number: ";
        cin >> arr[i];
    }
    for(int i = 0 ; i < n; i++)
    {
        int c = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                c++;
        }
        if(c%2 != 0)
            cout << "Single ELement: " << arr[i];
    }
    return 0;
}

