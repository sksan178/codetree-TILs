#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = (2 * n - 2 * i - 2); j > 0 ; j--){
            cout << " ";
        }
        for(int k = (2 * i) + 1; k > 0; k--){
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}