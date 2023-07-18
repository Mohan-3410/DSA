#include <bits/stdc++.h>
using namespace std;

/**
    int increment(int n){
        n++;
        return n;
    }
    int main(){
        int a =3;
        cout << a << endl;
        a= increment(a);
        cout << a << endl;
    }
**/

    void increment(int &n , int n1){
        n++;
        n1++;
    }
    // Use of references to update value of a & b.
    void swap(int &a, int &b){
        int temp =a;
        a=b;
        b=temp;
    }
    void func(int a[]){
        a[0]=5;
    }

    int main(){
        int a =3;
        int b = 5;
        cout << a << " " << b << endl;

        increment(a,b);
        cout << a << " " << b << endl;

        cout << "Swaping" <<endl;
        swap(a,b);
        cout << a << " " << b << endl;

        cout << "Array" << endl;
        int arr[10];
        arr[0]=1;
        cout << arr[0] << endl;
        func(arr);
        cout << arr[0] << endl;
    }

    /** 
      Note:- 
      > Pass by Value:- Just pass the value, do not update the value in function.
      > Pass by reference(&):- update the value of variable in the function.
      > inbuilt c++ fnction are:- swap, min, max.. etc
      > Array always pass by refernces without using & :- It means its value get updated on function.
      > when creating 2d or n-dimensional array passing on function should be in arr[][n]:- 
        it implies we can excape 1-d length.. but we have to specify 2-d length.
      > Dont put variable as a size of array.
    */