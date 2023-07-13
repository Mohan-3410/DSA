#include <iostream>
using namespace std;


int main(){

    
    int n;
    cin >> n;

    cout << " Pattern 1 " << endl; 
    cout << endl;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i-j+1 << " ";
        }
    cout<< endl;
    }
    cout << endl;

    cout << " Pattern 2 " << endl; 
    cout << endl;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            char ch = 'A' + i -1;
            cout << ch << " ";
        }
    cout<< endl;
    }
     cout << endl;

    cout << " Pattern 3 " << endl; 
    cout << endl;

    char ch = 'A' -1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            ch = ch + 1;
            cout << ch << " ";
        }
    cout<< endl;
    }

    cout << endl;

    cout << " Pattern 4" << endl; 
    cout << endl;


    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            ch = 'A' + j +i -2;
            cout << ch << " ";
        }
    cout<< endl;
    }

    cout << endl;

    cout << " Pattern 5 " << endl; 
    cout << endl;

    ch = 'A'-1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            ch = ch + 1;
            cout << ch << " ";
        }
    cout<< endl;
    }

    cout << endl;

    cout << " Pattern 6 " << endl; 
    cout << endl;


    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            ch = 'A' + i + j-2;
            cout << ch << " ";
        }
    cout<< endl;
    }

    cout << endl;

    cout << " Pattern 7 " << endl; 
    cout << endl;


    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            ch = 'A'+n - i +j-1;
            cout << ch << " ";
        }
    cout<< endl;
    }

    cout << endl;

    cout << " Pattern 8 " << endl; 
    cout << endl;


    for(int i=1; i<=n; i++){
        for(int k=1; k<=n-i; k++){
            ch = '-';
            cout << ch;
        }

        for(int j=1; j<=i; j++){
            char star = '*';
            cout << star;
        }
    cout<< endl;
    }
    cout << " Pattern 9 " << endl; 
    cout << endl;


    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            ch = 'x';
            cout << ch;
        }
    cout<< endl;
    }

    cout << endl;

    cout << " Pattern 10 " << endl;
    cout << endl; 


    for(int i=1; i<=n; i++){
        for(int k=1; k<=i-1; k++){
            ch = '-';
            cout << ch;
        }

        for(int j=1; j<=n-i+1; j++){
            char star = 'x';
            cout << star;
        }
    cout<< endl;
    }

    cout << endl;

    cout << " Pattern 11 " << endl; 
    cout << endl;


    for(int i=1; i<=n; i++){
        for(int k=1; k<=i-1; k++){
            ch = ' ';
            cout << ch;
        }

        for(int j=1; j<=n-i+1; j++){
            cout << i;
        }
    cout<< endl;
    }

    cout<< endl;
    cout << " Pattern 12 " << endl;
    cout << endl;
 

    for(int i=1; i<=n; i++){
        for(int k=1; k<=n-i; k++){
            ch = ' ';
            cout << ch;
        }

        for(int j=1; j<=i; j++){
            cout << i;
        }
    cout<< endl;
    }

    cout<< endl;
    cout << " Pattern 13 " << endl; 
    cout << endl;


    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=i-1; j++){
            cout << " ";
        }
        for(int k=1; k<=n-i+1; k++){
            cout << k+i-1;
        }
    cout<< endl;
    }

    cout<< endl;
    cout << " Pattern 14 " << endl; 
    cout << endl;

    int count =1;
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        for(int k=1; k<=i; k++){
            cout << count;
            count ++;
        }
    cout<< endl;
    }

    cout<< endl;
    cout << " Pattern 15 " << endl; 
    cout << endl;

    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        for(int k=1; k<=i; k++){
            cout <<k;
        }
        for(int k=1; k<=i-1; k++){
            cout <<i-k;
        }

    cout<< endl;
    }

    cout<< endl;
    cout << " Pattern 16 " << endl; 
    cout << endl;
    
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=n-i+1; j++){
            cout << j;
        }
        for(int k=1; k<=i-1; k++){
            cout <<'*';
        }
        for(int k=1; k<=i-1; k++){
            cout <<'*';
        }
        for(int j=1; j<=n-i+1; j++){
            cout << n-j-i+2;
        }

    cout<< endl;
    }

}