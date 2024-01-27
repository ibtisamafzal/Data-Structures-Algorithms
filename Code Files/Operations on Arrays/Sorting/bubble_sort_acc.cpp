// Helping Video:
// https://youtu.be/9s1_FWWxvlg

#include <iostream>
using namespace std;
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

    cout << "Before Sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "\n After Sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

// Bubble Sort program

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5] = {32,43,11,8,67};
//     int temp;
//     for(int i = 0; i <= 4; i++){
//         for(int j = 0; j<4-1; j++ ){
//             if(arr[j] > arr[j +1]){
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
    
//     cout<<"Bubble Sorting: "<<endl;
//     for(int k =0; k<5; k++){
//         cout<<arr[k]<<" ";
//     }
//     return 0;
// }