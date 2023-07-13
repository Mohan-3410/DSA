#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=1;
    int count = 1;
    
    cout<< "Pattern 1" <<endl;
    // Pattern 1
    while(i<=n){
        int j = 1;
        while (j<=n)
        {
            cout << i << " ";
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    cout<< "Pattern 2" <<endl;

    // Pattern 2
    i=1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
        
    }

    cout<<endl;
    cout<< "Pattern 3" <<endl;

    // Pattern 3
    i=1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<n-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
        
    }

    cout<<endl;
    cout<< "Pattern 4" <<endl;

    // Pattern 4
    i=1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
        
    }

    cout<<endl;
    cout<< "Pattern 5" <<endl;

    // Pattern 5
    i=1;
    char star ='*';
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<star<<" ";
            j++;
        }
        cout<<endl;
        i++;
        
    }

    cout<<endl;
    cout<< "Pattern 6" <<endl;

    // Pattern 6
    i=1;
    count =1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
        
    }

    cout<<endl;
    cout<< "Pattern 7" <<endl;

    // Pattern 7
    i=1;
    count =1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
        
    }
}