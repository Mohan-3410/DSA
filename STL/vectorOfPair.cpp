#include <bits/stdc++.h> 
using namespace std;
void printVec(vector<pair<int, int>> v){
    cout << "size: " << " " << v.size()<< endl;
    for(int i=0; i<v.size();++i){
        cout << v[i].first << " " << v[i].second << endl;;
    }
    cout << endl;
}

int main(){
    // vector of pair
    vector<pair<int ,int >> v = {{1,2},{2,3},{3,4}};
    printVec(v);
    cout << endl;

    // how to take input
    cout << "Taking input" << endl;
    vector<pair<int, int>> v2;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x,y;
        cin >> x >> y;
        v2.push_back({x,y});
    }
    printVec(v2);
}