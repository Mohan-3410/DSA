#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    int third[15] = {2,3};
    printArray(third, 15);
    cout<<endl;

    int forth[10] = {0};
    printArray(forth, 10);
    cout<<endl;

    int fifth[23] = {1};
    printArray(fifth, 23);
    cout<<endl;

    // size of array

    int size = sizeof(forth)/sizeof(int);
    cout << size;
}