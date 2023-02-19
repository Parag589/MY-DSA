#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end = 1;

    while (end < size)
    {
        swap(arr[start], arr[end]);
        start = start + 2;
        end = end + 2;
    }

    // using for loop

    // for (int i = 0; i < size; i += 2)
    // {
    //     if (i + 1 < size)
    //     {
    //         swap(arr[i], arr[i + 1]);
    //     }
    // }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    system("cls");
    int arr[] = {1, 2, 3, 4, 5, 6};

    reverse(arr, 6);
    print(arr, 6);

    return 0;
}