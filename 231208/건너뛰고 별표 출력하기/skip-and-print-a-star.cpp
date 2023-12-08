#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl << endl;
    }

    for(int i = 2; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout << "*";
        }
        cout << endl << endl;
    }
    return 0;
}