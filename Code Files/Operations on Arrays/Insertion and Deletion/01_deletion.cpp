// Helping Video:
// https://youtu.be/aF91nxcAM-E

#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size of array: " << endl;
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " Elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int position;
    cout << "Enter Position to delete: " << endl;
    cin >> position;

    for (int i = position; i < size; i = i + 1)
    {
        arr[i] = arr[i + 1];
    }
    cout << "Array after deletion: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}