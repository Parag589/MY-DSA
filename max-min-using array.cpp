#include <bits/stdc++.h>
using namespace std;

int maximum(int arr[], int size)
{
    int maxi = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]); // using predefined fxn

        // if (arr[i] > maxi)
        // {
        //     maxi = arr[i];
        // }
    }
    return maxi;
}

int minimum(int arr[], int size)
{
    int mini = INT_MAX;

    for (int i = 0; i < size; i++)
    {

        mini = min(mini, arr[i]); // using predefined fxn

        //     if (arr[i] < min)
        //     {
        //         min = arr[i];
        //     }
    }
    return mini;
}

int main()
{
    int size;
    cin >> size;

    int num[100];

    // taking input in array

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "maximum number is " << maximum(num, size) << endl;
    cout << "maximum number is " << minimum(num, size) << endl;

    return 0;
}