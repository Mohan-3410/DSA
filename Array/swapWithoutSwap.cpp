#include <iostream>
using namespace std;



void swapAlternate(int arr[], int size){
    
    for (int i =1; i<size; i+=2){
        int temp = arr[i-1];
        arr[i-1] = arr[i];
        arr[i] = temp;
    }
    for(int i =0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[6] = {2,3,4,5,6,7};

    swapAlternate(arr,6);

}