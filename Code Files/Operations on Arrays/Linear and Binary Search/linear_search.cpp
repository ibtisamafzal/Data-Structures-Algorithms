#include <iostream>
using namespace std;
int main()
{
    int pos = 1;
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to find: ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element is found at index: " << i << endl;
            pos = 0;
        }
    }

    if (pos == 1)
        cout << "Element not found." << endl;

    return 0;
}