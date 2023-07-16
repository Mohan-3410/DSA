#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int ans = 0;
    for (int i=0; n>0; i++){
        if(n%10==1){
            ans = ans + pow(2,i);
        }
        n = n/10;
    }
    cout << ans;
}