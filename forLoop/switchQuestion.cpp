#include <iostream>
using namespace std;

int main(){
    int rupees;
    cin >> rupees;
    int num;
    cin >> num;

    switch (num)
    {   
        
        case 100 :
            if (rupees>=100)
            {
                cout << "100-Rupees:- " << rupees/100 << endl;
                rupees = rupees%100;
            }   
        case 50 :
            if (rupees>=50)
            {
                cout << "50-Rupees:- " << rupees/50 << endl;
                rupees = rupees%50;
            } 
        case 20 :
            
            if (rupees>=20)
            {   
                cout << "20-Rupees:- " << rupees/20 << endl;
                rupees = rupees%20;
            } 
        case 1 :
             if (rupees>=1)
            {   
                cout << "1-Rupees:- " << rupees/1 << endl;
            } 
            
        default:
            break;
        }
}