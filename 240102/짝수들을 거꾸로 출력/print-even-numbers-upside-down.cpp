#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int m[n];
    for(int i = 0; i < n; i++){
        cin >> m[i];
    }

    for(int i = n-1; i >= 0; i--){
        if(m[i] % 2 == 0){
            cout << m[i] << " ";
        }
    }
    return 0;
}