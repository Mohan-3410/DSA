#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int i=2;
    bool select = true;
    while(i<n){
        if(n%i!=0){
           select = true;
        }
        else {
            select = false;
        break;
        }
        i++;
    }


    if(select==false){
        cout<< "NOT PRIME" << endl;
    }
    else{
        cout << "PRIME" << endl;
    }
    
    
}