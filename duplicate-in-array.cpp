#include <bits/stdc++.h>
using namespace std;
int findDuplicate(int arr[], int size)
{
    // Write your code here
    int ans = 0;

    // XOR all array elements
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    // XOR [1 to n-1]
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{
    system("cls");
    int numbers[5] = {1, 2, 3, 4, 2};
    cout << findDuplicate(numbers, 5);

    return 0;
}