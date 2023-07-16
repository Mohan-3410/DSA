#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int reverse =0 ;

    for (int i =0; n>0; i++){
        
        int remainder = n % 10;

        if(reverse > INT_MAX/10 || reverse < INT_MIN/10){
            cout << 0;
        }

        reverse = reverse*10  + remainder;
        n = n/10;
    }

    cout << reverse;
}