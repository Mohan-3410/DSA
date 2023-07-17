#include <iostream>
using namespace std;
int getMin(int arr[], int size){
    int minimum = INT_MAX;
    for(int i =0; i< size; i++){
        // Another Method
        minimum = min(minimum,arr[i]);
        // if(arr[i] < min){
        //     min = arr[i];
        // }
    }
    return minimum;
}
int getMax(int arr[], int size){
    int maximum = INT_MIN;
    for(int i =0; i< size; i++){
        // Another mathod
        maximum = max(maximum,arr[i]);
        // if(arr[i] > max){
        //     max = arr[i];
        // }
    }
    return maximum;
}

int main(){
    int numberArr[100];
    int size;
    cin >> size;

    for (int i =0; i<size; i++){
        cin >> numberArr[i];
    }
    
    cout << "Max array Value:- " << getMax(numberArr,size) << endl;
    cout << "min array Value:- " << getMin(numberArr,size) << endl;
}