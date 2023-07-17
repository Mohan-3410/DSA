#include <iostream>
using namespace std;

int keyv(int arr[],int size, int key){
    for(int i =0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}


int main(){
    int arr[6]={2,4,5,6,7,1};
    int key; 
    cin >> key;

    bool found = keyv(arr,6,key);

    if(found){
        cout << "key is present";
    }
    else{
        cout << "key is absent";
    }
}