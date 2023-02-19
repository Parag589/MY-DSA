#include <bits/stdc++.h>
using namespace std;

void printarray(int r[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << r[i] << " ";
    }
}

int main()
{
    system("cls");
    int first[5] = {11, 12, 13, 14, 15};
    printarray(first, 5);
    return 0;
}