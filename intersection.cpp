#include <bits/stdc++.h>
using namespace std;

void intersection(int arr[], int brr[], int size1, int size2)
{
    // optimized

    int i = 0, j = 0;
    while (i < size1 && j < size2)
    {
        if (arr[i] < brr[j])
        {
            i++;
        }

        if (arr[i] == brr[j])
        {
            cout << arr[i] << " ";
            i++;
            j++;
        }

        if (arr[i] > brr[j])
        {
            j++;
        }
    }

    // not optimized

    // int ans = 0;
    // for (int i = 0; i < size1; i++)
    // {
    //     int element = arr[i];
    //     for (int j = 0; j < size2; j++)
    //     {
    //         if (element == brr[j])
    //         {
    //             cout << element << " ";
    //             element = INT_MIN;
    //             break;
    //         }
    //     }
    // }
}

int main()
{
    system("cls");
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {3, 4, 5, 6, 7};

    intersection(arr, brr, 5, 5);

    return 0;
}