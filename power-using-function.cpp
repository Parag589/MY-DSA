#include <bits/stdc++.h>
using namespace std;

int power()
{
    int a, b;
    cout << "enter values of a and b" << endl;
    cin >> a >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    int answer = power();
    cout << answer << endl;

    int answer2 = power();
    cout << answer2 << endl;

    int answer3 = power();
    cout << answer3 << endl;
}

// it can be written as

// int power(int num1, int num2) // taking values of and from main fxn
// {
//     int ans = 1;
//     for (int i = 1; i <= num2; i++)
//     {
//         ans = ans * num1;
//     }
//     return ans; //gives ans to main fxn
// }

// int main()
// {
//     int a, b;
//     cout << "enter values" << endl;
//     cin >> a >> b;
//     int ans = power(a, b);
//     cout << "ans is" << ans;
//     return 0;
// }