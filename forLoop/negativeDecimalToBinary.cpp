#include <iostream>
#include <math.h>
using namespace std;
#define int long long

signed main (){
    int n;
    cin >>n;


    int i=0, ans = 0;

    if (n<0){
        n = pow(2,32)+n;
        cout << n << endl;
    }
    for(int i=31;i>=0;i--){
        cout<<((n>>i)&1);
    }
    // cout<<endl;
    // while(n){
    //     int lastDigit = n&1;
    //     ans = (lastDigit*pow(10,i))+ans;

    //     n= (n>>1);
    //     i++;

    // }
    //  cout << ans;
}