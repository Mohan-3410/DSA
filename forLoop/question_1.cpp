#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum =0;
    int product =1;

    while(n>0){
        int newNumber = n/10;
        int lastdigit = n%10;

        sum += lastdigit;
        product*=lastdigit;

        n= newNumber;
    }

    cout << product - sum;
}