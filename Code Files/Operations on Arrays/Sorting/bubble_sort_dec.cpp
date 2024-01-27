// Helping Video:
//https://youtu.be/9s1_FWWxvlg

#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {2, 8, 6, 5, 1};
    cout << "Before Sorting: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "\n After Sorting: ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}