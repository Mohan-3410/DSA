#include <iostream>
#include <math.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    bool isTrue = false;
    int limit = 

    for(int i = 0; pow(2,i) <= n; i++ ){
        if (pow(2,i)==n){
            cout << "True";
            isTrue = true;
            break;
        }
    }
    if(isTrue==false){
        cout << "false";
    }
    
}