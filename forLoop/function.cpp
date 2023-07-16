#include <iostream>
using namespace std;

// Power of Number
int power(int a, int b){
    int ans = 1;

    for(int i = 0; i<b; i++){
        ans*=a;
    }
    return ans;
}

// Factorial of number
int fact(int a){
    int ans = 1;
    for(int i =1; i<=a; i++){
        ans*=i;
    }
    return ans;
}

// Comination of Number
int nCr(int a, int b){
    int ans = fact(a)/(fact(a-b)*fact(b));
    return ans;
}

// isEven or not
bool isEven(int a){
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}

// Counting a Number
void numberCount(int n){
    for(int i =1; i<=n; i++){
        cout << i << " ";
    }
    cout << endl;
}

// isPrime or Not
bool isPrime(int n){
    for(int i =2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

// AP of 3n+7
int ap(int n){
    return 3*n+7;
}


int numberOfSetBit(int a , int b){
    int count = 0;
    while (a>0){
        if(a&1){
            count++;
        }
        a=a>>1;
    }
    while (b>0){
        if(b&1){
            count++;
        }
        b = b>>1;
    }
    return count;
}

void fabonacciSeries(int n){
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for(int i =2; i<n; i++){
        int nextNumber = a + b;
        a = b;
        b = nextNumber; 
        cout << nextNumber << " ";
    }
}


int main (){
    int a,b;
    cin >> a >> b;

    cout << "Power:- "<< power(a,b) << endl;
    cout << "Factorial:- " << fact(a) << endl;
    cout << "nCr:- " << nCr(a,b) << endl;
    if(isEven(a)){
        cout << "Even Number" << endl;
    }
    else {
        cout << "Odd Number" << endl;
    }
    numberCount(a);

    if(isPrime(a)){
        cout << "Prime Number" << endl;
    }
    else {
        cout << "Not a Prime Number" << endl;
    }
    cout << "ap of 3n+7:- "<< ap(a) << endl;
    cout << "noOfSetBit:- " << numberOfSetBit(a,b) << endl;
    fabonacciSeries(a);
}