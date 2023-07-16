#include <iostream>
using namespace std;
 
int main(){
    int num = 2;

    switch (num)
    {
    case 1:
        cout<< "One" <<endl;
        break;
    case 2: 
        cout << "two" << endl;
        break;
    case 3: 
        cout << "three" << endl;
        break;
    default:
        cout << "its a default";
        break;
    }
}