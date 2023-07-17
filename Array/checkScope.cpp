#include <iostream>

using namespace std;

// It implies that change in function also update value in main function.
void update (int arr[], int size){
    arr[1]=100;

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout<< endl;

}
int main(){
    int arr[3]= {2,4,5};

    update(arr, 3);

    for(int i=0; i<3; i++){
        cout << arr[i] << " ";
    }

}