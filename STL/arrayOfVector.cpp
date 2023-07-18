#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
   // representation of array of vector 
   vector<int> v5[10];

   // Taking Input
   int N;
   cin >> N;
   vector<int> v[N];
   for(int i=0; i<N; i++){
    int n;
    cin >> n;
    for(int j=0; j<n; j++){
        int y;
        cin >> y;
        v[i].push_back(y);
    }
   }

   // printing array of vector;
    cout << "Printing......." << endl;
   for(int i =0; i< N; ++i){
        printVec(v[i]);
   }
}