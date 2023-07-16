#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m = n;
    int mask =0;

    if(n==0){
        cout << 1;
    }
    else{
    for (int i =0; m>0; i++){
        mask = (mask<<1)|1;
        m = m >> 1;
    }

    int ans = ((~n)&mask);
    cout << ans;
    }
    
    
}