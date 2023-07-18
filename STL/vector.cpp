#include <bits/stdc++.h>
using namespace std;

// print vector
void printVec(vector<int> v){
    cout << "Size: "<< v.size() << endl;
    for(int i =0; i<v.size(); ++i){
        // v.size() -> O(1)
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    // its a array of size 10;
    int a[10];  

    // its a vector of size 0 but its value dynamically changes.
    vector<int> v;

    // How to take Input
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }
    printVec(v);

    // set size of vector
    vector<int> v1(10);
    v1.push_back(7); // O(1)
    printVec(v1);

    // prefill vector by any number
    vector<int> v2(10,5);
    v2.push_back(13);

    // removing last element from vector
    v2.pop_back(); // O(1)
    printVec(v2);

    // copy of vector
    cout << "copy of Vector" << endl;
    vector<int> v3 = v; // O(n):- Time complexity is not o(1) - because one one element is copy so complexity is O(n).
    v3.push_back(100);
    printVec(v);
    printVec(v3);




    

}

/**
 
    > Vector is a array which have a dynamic size.
    > vectors have continuous memory block.
    > like pair we can copy vector. This funtionality is not available in array.
    > vector send copy of value in function. So updating a vector through function we need references.
**/
