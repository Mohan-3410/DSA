#include <iostream>
using namespace std;

int main (){
    int arr[10] = {3, 5, 11};

    // accessing of array
    cout << arr[2] << " ";
    cout << arr[0] << " ";
    cout << arr[1] << endl;
    
    // printing of array

    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
}