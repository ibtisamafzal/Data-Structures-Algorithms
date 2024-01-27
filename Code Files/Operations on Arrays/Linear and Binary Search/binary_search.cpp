//Help: Code with Harry

#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int low=0, high=n-1, mid;

    
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
   cout << "Element not found" << endl;
}

int main()
{
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

    int searchindex = binary_search(arr, n, key);
    cout << "Element is found at index: " << searchindex << endl;

    return 0;
}


// Another Binary Search program
// the data should be assending and sorted form

// #include <iostream>
// using namespace std;
// int main(){
//     int size = 10;
//     int arr[size];
//     for(int i =0;i<size; i++){
//         cout<<"Enter the "<< i + 1 << " Element: ";
//     cin>>arr[i];
//     }
//     int first = 0, last = 9;
//     int num,mid;
//     cout<<"Enter the number you want to find: ";
//     cin>>num;
    
//     do{
//         mid = (first+last)/2;
//         if(arr[mid] == num)
//         {
//             cout<<"Number found at "<< mid + 1<<" Location";
//             break;
//         }
//         else if(arr[mid] < num){
//             first = mid +1;
//         }
//         else{
//             last = mid -1;
//         }
//     }while(first <= last);
    
//     if(first > last){
//         cout<<"Element not found";
//     }
//     return 0;
// }