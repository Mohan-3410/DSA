#include <iostream>
using namespace std;


int main(){

    // Pattern 1
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i-j+1 << " ";
        }
    cout<< endl;
    }
    cout << endl;

    // Pattern 2
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            char ch = 'A' + i -1;
            cout << ch << " ";
        }
    cout<< endl;
    }
     cout << endl;

    // Pattern 3
    char ch = 'A' -1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            ch = ch + 1;
            cout << ch << " ";
        }
    cout<< endl;
    }

    cout << endl;

    // Pattern 4

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            ch = 'A' + j +i -2;
            cout << ch << " ";
        }
    cout<< endl;
    }

    cout << endl;

    // Pattern 6
    ch = 'A'-1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            ch = ch + 1;
            cout << ch << " ";
        }
    cout<< endl;
    }

    cout << endl;

    // Pattern 7

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            ch = 'A' + i + j-2;
            cout << ch << " ";
        }
    cout<< endl;
    }

    cout << endl;

    // Pattern 8

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            ch = 'A'+n - i +j-1;
            cout << ch << " ";
        }
    cout<< endl;
    }

    cout << endl;

    // Pattern 9

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
    // Pattern 10

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            ch = 'x';
            cout << ch;
        }
    cout<< endl;
    }

    cout << endl;

    // Pattern 11

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

    // Pattern 12

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
    // Pattern 12

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
    // Pattern 13

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
    // Pattern 14
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
    // Pattern 15
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
    // Pattern 16
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