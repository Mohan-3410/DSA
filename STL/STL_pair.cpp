#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string> p;
    
    // How to assign value
    // p= make_pair(2,"abc");

    //  Another way to assign value without make_pair
    p = {1,"abc"};

    // we can make copy of pair. Which is not possiblei in array.
    pair<int, string> p1 = p;

    // This syntax will not update p element. Because its a copy
    p1.first = 3;

    // if you use reference then its value will be updated.
    pair<int , string> &p2 =p;
    p2.first =4;
    // How to Print
    cout << p.first << " " << p.second << endl;

    int a[]={1,2,3};
    int b[]={2,3,4};

    // if there is any relation b/w two array then we use pair.
    pair<int, int> p_array[3];
    p_array[0]= {1,2};
    p_array[1]= {2,3};
    p_array[2]= {3,4};
    swap(p_array[0], p_array[2]);
    for(int i=0; i<3; ++i){
        cout << p_array[i].first << " "  << p_array[i].second << endl;
    }

    // How to take input
    pair <int, string> p3;
    cin >> p3.first;
    cout << p3.first;
 }