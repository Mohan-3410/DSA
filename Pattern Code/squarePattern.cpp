#include <iostream>
using namespace std;

int main (){
    char star = '*';
    int n;
    cin >> n;
    int j=0;
    while(j<n){
        int i=0;
        while(i<n){
            cout<< star << " ";
            i++;
        }
        cout<<"\n";
        j++;
    }
}