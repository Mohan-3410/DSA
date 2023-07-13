#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int n;
    cin >> n;
    int a=0,b=1;
    int sum;
    cout <<a << " " << b << " ";

    for(int i=0; i<n-2; i++){
     int next_number = a+b;
     cout << next_number << " ";

     a=b;
     b= next_number;
    }
}