#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;
    while (start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i =0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[8]= {4,5,2,5,6,2,1};

    reverseArray(arr,7);
}