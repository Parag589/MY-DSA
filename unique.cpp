#include <bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int size)
{
    // Write your code here
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    system("cls");
    int numbers[5] = {1, 2, 1, 2, 3};

    cout << findUnique(numbers, 5);
    return 0;
}