#include <iostream>
using namespace std;

int main() {
    int n, c;
    cin >> n;

    int prod = 1;

    for(int i = 1; i <= 10; i++){
        prod *= i;
        c = i;

        if(prod >= n){
            break;
        }
    }

    cout << c;
    return 0;
}