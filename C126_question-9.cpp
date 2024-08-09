#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = n * (n + 1) / 2;
    if(sum % 2 == 0)
        cout << "Maximum length of continuous subsequence: " << n;
    else
        cout << "Maximum length of continuous subsequence: " << (n-1);
    return 0;
}
