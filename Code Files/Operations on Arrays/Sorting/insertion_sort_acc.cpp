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

    for (int i=1; i<n; i++){
        int current = arr[i];
        int j = i-1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    cout <<"Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/* Insertion Sort
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {5,23,66,12,56};
    int current_index, temp;
    for(int i =0; i < 4 ;i++){
        current_index = i;
        for(int j = i + 1;j<5; j++){
            if(arr[current_index] > arr[j]){
                temp = arr[current_index];
                arr[current_index] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout<<"Sorted Array: "<<endl;
    for(int k =0; k < 5; k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}
*/