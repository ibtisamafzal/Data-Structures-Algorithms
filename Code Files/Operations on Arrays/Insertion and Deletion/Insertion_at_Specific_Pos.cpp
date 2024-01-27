#include <iostream>
using namespace std;

int main(){
    int arr[5] = {12,23,54,76,85};
    int pos, num;
    cout<<"Enter the position to insert: "<<endl;
    cin>>pos;

if(pos < 0 || pos > 5){
    cout<<"Enter the valid position. "<<endl;
    return 1;
    }
   
    cout<<"Enter the Number: "<<endl;
    cin>>num;
   
for(int i = 5; i >=pos; i--){
    arr[i+1] =  arr[i];
    }

    arr[pos] = num;
    cout<<"New Array: "<<endl;
   
for(int j =0; j <=5; j++){
    cout<<arr[j]<<" ";
    }
    return 0;
}