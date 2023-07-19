#include <bits/stdc++.h>
using namespace std;

/**
   What is a Iterators?
   > Indexing of a value is possible in case of array and vector.
   > But there are other container like map , set where indexing are not possible.
   > So in other to access the value of container Iterator are used.
*/
 

int main(){
    vector<int> v={2,4,5,2,6,7};

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " " ;
    }
    cout << endl;
    cout << endl;

    // how to create iterator
    vector<int> :: iterator it1;
    // iterator target the value of element.
    for(it1 = v.begin(); it1!=v.end(); it1++){
        cout << *it1 << " ";
    }

    cout << endl;
    cout << endl;
    // how to use itertor in pair of vector
    vector<pair<int,int> >v_p = {{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator it;
    for(it = v_p.begin(); it!=v_p.end(); it++){
        cout<< (*it).first << " " << (*it).second <<endl;
    }
    cout<< endl;
    cout << "(*it).first <=> (it->first)" << endl;
    for(it = v_p.begin(); it!=v_p.end(); it++){
        cout<< it->first << " " << it->second <<endl;
    }

    cout<< endl;
    // use shortcut :- auto and value
    for(auto i : v_p){
        cout<< i.first << " " << i.second <<endl;
    }



}