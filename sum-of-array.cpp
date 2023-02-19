#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size;
    cin >> size;

    int num[100], sum = 0;

    // taking input

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
        cout << " " << num[i];
    }

    // printing sum

    for (int i = 0; i < size; i++)
    {
        sum += num[i];
    }
    cout << endl
         << sum;

    return 0;
}

// other sol

// int main()
// {
//     int size;
//     cin >> size;

//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         int num;
//         cin >> num;
//         sum += num;
//     }
//     cout << sum << endl;

//     return 0;
// }