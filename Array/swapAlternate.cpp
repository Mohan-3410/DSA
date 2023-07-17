#include <iostream>
using namespace std;

void alternateSwap(int arr[], int size){
    for(int i = 1; i<size; i++){
        swap(arr[i-1], arr[i]);
        i++;
    }
    for(int i =0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int  main (){
    int arr[8] = {2,3,5,6,8,9,1,4};

    alternateSwap(arr,8);
}