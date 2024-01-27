// https://youtu.be/rjLOLuv1EDc

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

    int element, position;
    cout << "Enter element and Position: " << endl;
    cin >> element >> position;

    size = size + 1;
    for (int i = size - 1; i >= position; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position] = element;

    cout << "New Array after insertion: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}