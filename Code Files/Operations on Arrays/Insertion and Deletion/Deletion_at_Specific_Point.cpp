#include <iostream>
using namespace std;

    int main(){
    int arr[5] = {12,34,56,43,21};
    int pos;

    cout<<"Enter the position to delete: "<<endl;
    cin>>pos;
    
    if(pos < 0 || pos >=5 ){
        cout<<"Enter the valid position. "<<endl;
        return 1;
    }
    
    for(int i =pos; i < 4; i++){
        arr[i] = arr[i+1];
    }
    
    cout<<"New Array: "<<endl;
    for(int j =0; j<4; j++){
        cout<<arr[j]<<" ";
    
    }
    
return 0;
}