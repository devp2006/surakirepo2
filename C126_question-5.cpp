#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter no of rounds: ";
    cin >> n;
    int arr1[n], arr2[n], l1[n], l2[n], p1 = 0, p2 = 0;
    for(i = 0; i < n; i++)
    {
        cout << "\nEnter score of player 1: ";
        cin >> arr1[i];
        cout << "Enter score of player 2: ";
        cin >> arr2[i];
        p1 += arr1[i];
        p2 += arr2[i];
        if(arr1[i] > arr2[i])
        {
            l1[i] = arr1[i] - arr2[i];
            l2[i] = 0;
        }
        else if(arr1[i] < arr2[i])
        {
            l2[i] = arr2[i] - arr1[i];
            l1[i] = 0;
        }
        else
        {
            l1[i] = 0;
            l2[i] = 0;
        }

    }
    int m1 = l1[0], m2 = l2[0], ind1 = 0, ind2 = 0;
    for(i = 1; i < n; i++)
    {
        if(l1[i] > m1)
        {
            m1 = l1[i];
            ind1 = i + 1;
        }
        if(l2[i] > m2)
        {
            m2= l2[i];
            ind2 = i + 1;
        }
    }
    if(m1 > m2)
    {
        cout << "Player 1 wins the game with the maximum lead of " << m1 << " in round " << ind1;
    }
    else if(m1 < m2)
    {
        cout << "Player 2 wins the game with the maximum lead of " << m2 << " in round " << ind2;
    }
    else
    {
        if(p1 > p2)
            cout << "Player 1 wins with cumulative score of " << p1;
        if(p1 < p2)
            cout << "Player 2 wins with cumulative score of " << p2;
    }
    return 0;
}
