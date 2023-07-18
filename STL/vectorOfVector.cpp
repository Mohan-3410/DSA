#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> v){
    cout << "size: " << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " " ;
    }
    cout << endl;
}
int main(){
    /**
      What is vector of vector?
      > Its a dynamically 2-D array.
    */
   int N;
   cin >> N;
   // Represention
   vector<vector<int>> v;

   // input on vector of vector
   for(int i=0; i<N; i++){
    int n;
    cin >> n;
    vector<int> temp;
    for(int j=0; j<n; j++){
        int x;
        cin >> x;
        temp.push_back(x);
    }
    v.push_back(temp);
   }
    v[0].push_back(11);
   // printing of vector of vector
   for(int i=0; i<N; i++){
    printVec(v[i]);
   }

   cout << v[1][3] << endl;
}