#include <iostream>
using namespace std;

// Creating a simple calculator using a switch statement.

int main (){
    int a,b;
    char op;
    cin >> a >> op >> b;

    switch (op){
        case '+' : 
            cout << a + b;
            break;
        case '-' : 
            cout << a - b;
            break;
        case '*' : 
            cout << a * b;
            break;
        case '/' : 
            cout << a / b;
            break;
        case '%' : 
            cout << a % b;
            break;
        default:
            cout<< " Unknown Operator";
            break;
    }

}