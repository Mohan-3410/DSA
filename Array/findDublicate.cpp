#include <iostream>
using namespace std;

int findDublicate(int arr[], int size){
    int ans =0;
    for(int i=0; i<size; i++){
        ans^=arr[i];
    }
    for(int i =1; i<size; i++){
        ans^=i;
    }
    return ans;
}

int main(){
    int arr[7] = {3,5,1,2,4,5,6};
    cout << findDublicate(arr,7); 
}