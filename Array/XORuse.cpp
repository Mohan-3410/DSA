#include <iostream>
using namespace std;

int findUnique(int arr[], int size){
    int ans = 0;
    for(int i =0; i<size; i++){
        ans^=arr[i];
    }
    return ans;
}
int main(){
    int arr[7]= {2,5,33,5,2,100,33};
    cout << findUnique(arr,7);
}