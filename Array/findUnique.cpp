#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{   
    
    for(int i = 0; i<size; i++){
        bool unique =true;
        for(int j =0; j<size; j++){
            if(arr[i]==arr[j] && i!=j){
                unique = false;
                break;
            }
        }
        if(unique){
            return arr[i];
        }
        
        
    }
}
int main(){
    int arr[7] = {2,7,5,7,2,5,4};
    int unique = findUnique(arr,7);
    cout<< unique;
}