#include <bits/stdc++.h>
using namespace std;

bool search(int arr[], int size, int key) // searching key present or not  -  5
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {

            return 1;
        }
    }

    return 0;
}

int main()

{
    system("cls");

    int size; // taking size of array  -  1
    cin >> size;

    int box[100];

    for (int i = 0; i < size; i++) // taking elements of array  -  2
    {
        cin >> box[i];
        cout << endl;
        cout << " " << box[i];
    }

    // int box[] = {1, 2, 3};
    int key;
    cout << endl
         << "enter key" << endl;
    cin >> key; // taking key to be search  -  3

    bool found = search(box, 3, key); // calling search fxn to search key  -  4

    if (found) // printing answer  -  6
    {
        cout << "present";
    }

    else
    {
        cout << "not present";
    }

    return 0;
}