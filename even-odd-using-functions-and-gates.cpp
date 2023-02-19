#include <bits/stdc++.h>
using namespace std;
bool isEven(int a)
{
    // odd
    if (a & 1)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int n, answer;
    cin >> n;

    answer = isEven(n);

    if (answer == 0)
    {
        cout << "odd" << endl;
    }
    else
    {
        cout << "even";
    }
}