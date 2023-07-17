#include <iostream>
using namespace std;
// need knowledge of pointer

void swaping(int& a, int& b){
    int temp = a;
    a=b;
    b=temp;
}


void swapAlternate(int arr[], int size){
    
    for (int i =1; i<size; i+=2){
        swaping(arr[i-1], arr[i]);
        cout << arr[i-1] << " " << arr[i] << endl;
    }
    for(int i =0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[6] = {2,3,4,5,6,7};

    swapAlternate(arr,6);

}